#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function declaration
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

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
    int arr1[] = {2, 4, 3};
    int arr2[] = {5, 6, 4};
    
    struct ListNode* l1 = createList(arr1, 3);
    struct ListNode* l2 = createList(arr2, 3);
    
    printf("Input: l1 = [2,4,3], l2 = [5,6,4]\n");
    struct ListNode* result1 = addTwoNumbers(l1, l2);
    printf("Output: ");
    printList(result1);
    printf("Expected: [7,0,8]\n\n");
    
    // Example 2
    printf("Example 2:\n");
    int arr3[] = {0};
    int arr4[] = {0};
    
    struct ListNode* l3 = createList(arr3, 1);
    struct ListNode* l4 = createList(arr4, 1);
    
    printf("Input: l1 = [0], l2 = [0]\n");
    struct ListNode* result2 = addTwoNumbers(l3, l4);
    printf("Output: ");
    printList(result2);
    printf("Expected: [0]\n\n");
    
    // Example 3
    printf("Example 3:\n");
    int arr5[] = {9, 9, 9, 9, 9, 9, 9};
    int arr6[] = {9, 9, 9, 9};
    
    struct ListNode* l5 = createList(arr5, 7);
    struct ListNode* l6 = createList(arr6, 4);
    
    printf("Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]\n");
    struct ListNode* result3 = addTwoNumbers(l5, l6);
    printf("Output: ");
    printList(result3);
    printf("Expected: [8,9,9,9,0,0,0,1]\n");
    
    // Free memory
    freeList(l1);
    freeList(l2);
    freeList(l3);
    freeList(l4);
    freeList(l5);
    freeList(l6);
    freeList(result1);
    freeList(result2);
    freeList(result3);
    
    return 0;
}