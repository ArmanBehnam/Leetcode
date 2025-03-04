import java.util.PriorityQueue;
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
    public ListNode mergeKLists(ListNode[] lists) {
        // Handle edge cases
        if (lists == null || lists.length == 0) {
            return null;
        }
        
        // Use a priority queue (min heap) to efficiently merge the lists
        PriorityQueue<ListNode> minHeap = new PriorityQueue<>((a, b) -> a.val - b.val);
        
        // Add the head of each non-empty list to the heap
        for (ListNode head : lists) {
            if (head != null) {
                minHeap.offer(head);
            }
        }
        
        // Create a dummy head for the result linked list
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        
        // Process nodes from the heap until it's empty
        while (!minHeap.isEmpty()) {
            // Remove the smallest node
            ListNode node = minHeap.poll();
            
            // Add this node to our result list
            current.next = node;
            current = current.next;
            
            // If this node has a next node, add it to the heap
            if (node.next != null) {
                minHeap.offer(node.next);
            }
        }
        
        return dummy.next;
    }
}