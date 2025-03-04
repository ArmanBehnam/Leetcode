/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode* swapPairs(struct ListNode* head) {
    // Handle empty list or single node
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    // Create a dummy node to handle edge cases
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    
    // Iterate through the list
    while (head != NULL && head->next != NULL) {
        // Nodes to be swapped
        struct ListNode* first = head;
        struct ListNode* second = head->next;
        
        // Swapping
        prev->next = second;
        first->next = second->next;
        second->next = first;
        
        // Update pointers for next iteration
        prev = first;
        head = first->next;
    }
    
    return dummy.next;
}