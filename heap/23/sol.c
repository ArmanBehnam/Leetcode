#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function declaration
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize);

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Helper function to create a linked list from an array
struct ListNode* createList(int* arr, int size) {
    if (size == 0) return NULL;
    
    struct ListNode dummy;
    struct ListNode* current = &dummy;
    
    for (int i = 0; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }
    
    return dummy.next;
}

// Helper function to print a linked list
void printList(struct ListNode* head) {
    printf("[");
    while (head) {
        printf("%d", head->val);
        if (head->next) printf(",");
        head = head->next;
    }
    printf("]\n");
}

// Helper function to free a linked list
void freeList(struct ListNode* head) {
    struct ListNode* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // Example 1
    printf("Example 1:\n");
    int arr1[] = {1, 4, 5};
    int arr2[] = {1, 3, 4};
    int arr3[] = {2, 6};
    
    struct ListNode* list1 = createList(arr1, 3);
    struct ListNode* list2 = createList(arr2, 3);
    struct ListNode* list3 = createList(arr3, 2);
    
    struct ListNode* lists1[3] = {list1, list2, list3};
    printf("Input: lists = [[1,4,5],[1,3,4],[2,6]]\n");
    
    struct ListNode* result1 = mergeKLists(lists1, 3);
    printf("Output: ");
    printList(result1);
    printf("Expected: [1,1,2,3,4,4,5,6]\n\n");
    
    // Example 2
    printf("Example 2:\n");
    printf("Input: lists = []\n");
    struct ListNode* result2 = mergeKLists(NULL, 0);
    printf("Output: ");
    printList(result2);
    printf("Expected: []\n\n");
    
    // Example 3
    printf("Example 3:\n");
    printf("Input: lists = [[]]\n");
    struct ListNode* empty = NULL;
    struct ListNode* lists3[1] = {empty};
    struct ListNode* result3 = mergeKLists(lists3, 1);
    printf("Output: ");
    printList(result3);
    printf("Expected: []\n");
    
    // Free memory
    freeList(result1);
    
    return 0;
}