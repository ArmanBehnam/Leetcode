//  Definition for singly-linked list.
struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;
    int carry = 0;
    
    while (l1 || l2 || carry) {
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;
        
        int sum = x + y + carry;
        carry = sum / 10;
        
        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = sum % 10;
        current->next = NULL;
        
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    
    return dummy.next;
}