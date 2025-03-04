/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        // Edge cases
        if (head == null || k == 1) {
            return head;
        }
        
        // Create a dummy node
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        
        // Count total nodes - do this once upfront
        int count = 0;
        for (ListNode node = head; node != null; node = node.next) {
            count++;
        }
        
        // Initialize pointers
        ListNode prevGroupEnd = dummy;
        ListNode curr = head;
        
        // Process complete k-groups
        while (count >= k) {
            // Save the start of the current group (will become the end after reversal)
            ListNode groupStart = curr;
            ListNode nextGroupStart = curr;
            
            // Find the start of the next group
            for (int i = 0; i < k; i++) {
                nextGroupStart = nextGroupStart.next;
            }
            
            // Reverse the current k-group (more efficient inline version)
            ListNode prev = nextGroupStart; // Next group becomes previous of reversed group
            for (int i = 0; i < k; i++) {
                ListNode next = curr.next;
                curr.next = prev;
                prev = curr;
                curr = next;
            }
            
            // Connect the previous group to the reversed group
            prevGroupEnd.next = prev;
            
            // Update pointers for next iteration
            prevGroupEnd = groupStart;
            
            // We've processed k nodes
            count -= k;
        }
        
        return dummy.next;
    }
}