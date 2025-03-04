/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    // Edge cases
    if (head == NULL || k == 1) {
        return head;
    }
    
    // Create a dummy node
    struct ListNode dummy;
    dummy.next = head;
    
    // Count total nodes
    int count = 0;
    struct ListNode* counter = head;
    while (counter != NULL) {
        count++;
        counter = counter->next;
    }
    
    // Initialize pointers
    struct ListNode* prevGroupEnd = &dummy;
    struct ListNode* curr = head;
    
    // Process complete k-groups
    while (count >= k) {
        // Save the start of the group (will be the end after reversal)
        struct ListNode* groupStart = curr;
        
        // Find the start of the next group
        struct ListNode* nextGroupStart = curr;
        for (int i = 0; i < k; i++) {
            nextGroupStart = nextGroupStart->next;
        }
        
        // Reverse the current k-group
        struct ListNode* prev = nextGroupStart; // Next group becomes previous of reversed group
        for (int i = 0; i < k; i++) {
            struct ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        // Connect the previous group to the reversed group
        prevGroupEnd->next = prev;
        
        // Update pointers for next iteration
        prevGroupEnd = groupStart;
        
        // We've processed k nodes
        count -= k;
    }
    
    return dummy.next;
}