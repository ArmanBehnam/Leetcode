#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function declaration
struct ListNode* reverseKGroup(struct ListNode* head, int k);

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Helper function to create a linked list from an array
struct ListNode* createLinkedList(int* arr, int size) {
    if (size == 0) return NULL;
    
    struct ListNode* head = createNode(arr[0]);
    struct ListNode* current = head;
    
    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }
    
    return head;
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
    // Example 1: [1,2,3,4,5], k = 2 -> [2,1,4,3,5]
    printf("Example 1:\n");
    int arr1[] = {1, 2, 3, 4, 5};
    struct ListNode* test1 = createLinkedList(arr1, 5);
    printf("Input: ");
    printList(test1);
    printf("k = 2\n");
    struct ListNode* result1 = reverseKGroup(test1, 2);
    printf("Output: ");
    printList(result1);
    printf("Expected: [2,1,4,3,5]\n\n");
    
    // Example 2: [1,2,3,4,5], k = 3 -> [3,2,1,4,5]
    printf("Example 2:\n");
    int arr2[] = {1, 2, 3, 4, 5};
    struct ListNode* test2 = createLinkedList(arr2, 5);
    printf("Input: ");
    printList(test2);
    printf("k = 3\n");
    struct ListNode* result2 = reverseKGroup(test2, 3);
    printf("Output: ");
    printList(result2);
    printf("Expected: [3,2,1,4,5]\n\n");
    
    // Additional test: [1,2,3,4,5,6], k = 2 -> [2,1,4,3,6,5]
    printf("Additional test:\n");
    int arr3[] = {1, 2, 3, 4, 5, 6};
    struct ListNode* test3 = createLinkedList(arr3, 6);
    printf("Input: ");
    printList(test3);
    printf("k = 2\n");
    struct ListNode* result3 = reverseKGroup(test3, 2);
    printf("Output: ");
    printList(result3);
    printf("Expected: [2,1,4,3,6,5]\n\n");
    
    // Edge case: [1,2,3,4,5], k = 1 -> [1,2,3,4,5]
    printf("Edge case 1:\n");
    int arr4[] = {1, 2, 3, 4, 5};
    struct ListNode* test4 = createLinkedList(arr4, 5);
    printf("Input: ");
    printList(test4);
    printf("k = 1\n");
    struct ListNode* result4 = reverseKGroup(test4, 1);
    printf("Output: ");
    printList(result4);
    printf("Expected: [1,2,3,4,5]\n\n");
    
    // Free memory
    freeList(result1);
    freeList(result2);
    freeList(result3);
    freeList(result4);
    
    return 0;
}