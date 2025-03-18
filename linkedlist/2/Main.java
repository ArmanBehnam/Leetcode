public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        ListNode l1 = createLinkedList(new int[]{2,4,3});
        ListNode l2 = createLinkedList(new int[]{5,6,4});
        
        System.out.println("Example 1:");
        System.out.println("Input: l1 = [2,4,3], l2 = [5,6,4]");
        ListNode result1 = solution.addTwoNumbers(l1, l2);
        System.out.print("Output: ");
        printLinkedList(result1);
        System.out.println("Expected: [7,0,8]");
        
        // Example 2
        System.out.println("\nExample 2:");
        System.out.println("Input: l1 = [0], l2 = [0]");
        ListNode l3 = createLinkedList(new int[]{0});
        ListNode l4 = createLinkedList(new int[]{0});
        ListNode result2 = solution.addTwoNumbers(l3, l4);
        System.out.print("Output: ");
        printLinkedList(result2);
        System.out.println("Expected: [0]");
        
        // Example 3
        System.out.println("\nExample 3:");
        System.out.println("Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]");
        ListNode l5 = createLinkedList(new int[]{9,9,9,9,9,9,9});
        ListNode l6 = createLinkedList(new int[]{9,9,9,9});
        ListNode result3 = solution.addTwoNumbers(l5, l6);
        System.out.print("Output: ");
        printLinkedList(result3);
        System.out.println("Expected: [8,9,9,9,0,0,0,1]");
    }
    
    // Helper method to create a linked list from an array
    private static ListNode createLinkedList(int[] values) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        
        for (int val : values) {
            current.next = new ListNode(val);
            current = current.next;
        }
        
        return dummy.next;
    }
    
    // Helper method to print a linked list
    private static void printLinkedList(ListNode head) {
        System.out.print("[");
        while (head != null) {
            System.out.print(head.val);
            if (head.next != null) {
                System.out.print(",");
            }
            head = head.next;
        }
        System.out.println("]");
    }
}