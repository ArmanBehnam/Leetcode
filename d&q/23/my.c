/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 #include <stdlib.h>
 #include <limits.h>
 
 // Min-heap implementation for ListNode pointers
 typedef struct {
     struct ListNode** array;
     int size;
     int capacity;
 } MinHeap;
 
 // Create a new min heap
 MinHeap* createMinHeap(int capacity) {
     MinHeap* heap = (MinHeap*)malloc(sizeof(MinHeap));
     heap->array = (struct ListNode**)malloc(sizeof(struct ListNode*) * capacity);
     heap->size = 0;
     heap->capacity = capacity;
     return heap;
 }
 
 // Get parent index
 int parent(int i) { return (i - 1) / 2; }
 
 // Get left child index
 int leftChild(int i) { return 2 * i + 1; }
 
 // Get right child index
 int rightChild(int i) { return 2 * i + 2; }
 
 // Swap two nodes
 void swap(struct ListNode** a, struct ListNode** b) {
     struct ListNode* temp = *a;
     *a = *b;
     *b = temp;
 }
 
 // Heapify down
 void minHeapify(MinHeap* heap, int i) {
     int left = leftChild(i);
     int right = rightChild(i);
     int smallest = i;
     
     if (left < heap->size && heap->array[left]->val < heap->array[smallest]->val)
         smallest = left;
     
     if (right < heap->size && heap->array[right]->val < heap->array[smallest]->val)
         smallest = right;
     
     if (smallest != i) {
         swap(&heap->array[i], &heap->array[smallest]);
         minHeapify(heap, smallest);
     }
 }
 
 // Insert node into heap
 void insert(MinHeap* heap, struct ListNode* node) {
     if (heap->size == heap->capacity) return;
     
     // Insert at the end
     int i = heap->size;
     heap->array[i] = node;
     heap->size++;
     
     // Fix the min heap property if violated
     while (i != 0 && heap->array[parent(i)]->val > heap->array[i]->val) {
         swap(&heap->array[i], &heap->array[parent(i)]);
         i = parent(i);
     }
 }
 
 // Extract the minimum element
 struct ListNode* extractMin(MinHeap* heap) {
     if (heap->size <= 0) return NULL;
     
     struct ListNode* root = heap->array[0];
     
     // If there's only one element
     if (heap->size == 1) {
         heap->size--;
         return root;
     }
     
     // Replace root with last element and heapify
     heap->array[0] = heap->array[heap->size - 1];
     heap->size--;
     minHeapify(heap, 0);
     
     return root;
 }
 
 // Free the heap
 void freeHeap(MinHeap* heap) {
     free(heap->array);
     free(heap);
 }
 
 struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
     // Handle edge cases
     if (lists == NULL || listsSize == 0) {
         return NULL;
     }
     
     // Create a dummy head for the result list
     struct ListNode dummy;
     dummy.val = 0;
     dummy.next = NULL;
     struct ListNode* tail = &dummy;
     
     // Create a min heap
     MinHeap* heap = createMinHeap(listsSize);
     
     // Insert the first node from each list into the heap
     for (int i = 0; i < listsSize; i++) {
         if (lists[i] != NULL) {
             insert(heap, lists[i]);
         }
     }
     
     // Extract min element from heap, add to result list, and add next node from that list
     while (heap->size > 0) {
         struct ListNode* minNode = extractMin(heap);
         tail->next = minNode;
         tail = tail->next;
         
         if (minNode->next != NULL) {
             insert(heap, minNode->next);
         }
     }
     
     // Free the heap
     freeHeap(heap);
     
     return dummy.next;
 }