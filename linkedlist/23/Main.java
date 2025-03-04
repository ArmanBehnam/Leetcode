public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        ListNode list1 = createLinkedList(new int[]{1,4,5});
        ListNode list2 = createLinkedList(new int[]{1,3,4});
        ListNode list3 = createLinkedList(new int[]{2,6});
        
        ListNode[] lists1 = {list1, list2, list3};
        System.out.println("Example 1:");
        System.out.println("Input: lists = [[1,4,5],[1,3,4],[2,6]]");
        ListNode result1 = solution.mergeKLists(lists1);
        System.out.print("Output: ");
        printLinkedList(result1);
        System.out.println("Expected: [1,1,2,3,4,4,5,6]");
        
        // Example 2
        System.out.println("\nExample 2:");
        System.out.println("Input: lists = []");
        ListNode[] lists2 = {};
        ListNode result2 = solution.mergeKLists(lists2);
        System.out.print("Output: ");
        printLinkedList(result2);
        System.out.println("Expected: []");
        
        // Example 3
        System.out.println("\nExample 3:");
        System.out.println("Input: lists = [[]]");
        ListNode[] lists3 = {null};
        ListNode result3 = solution.mergeKLists(lists3);
        System.out.print("Output: ");
        printLinkedList(result3);
        System.out.println("Expected: []");
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