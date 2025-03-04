// ListNode class definition
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class Main {
    // Helper method to create a linked list from an array
    public static ListNode createLinkedList(int[] arr) {
        if (arr.length == 0) return null;
        
        ListNode head = new ListNode(arr[0]);
        ListNode current = head;
        
        for (int i = 1; i < arr.length; i++) {
            current.next = new ListNode(arr[i]);
            current = current.next;
        }
        
        return head;
    }
    
    // Helper method to convert a linked list to an array
    public static int[] linkedListToArray(ListNode head) {
        // Count the number of nodes
        int count = 0;
        ListNode temp = head;
        while (temp != null) {
            count++;
            temp = temp.next;
        }
        
        // Create array and populate
        int[] result = new int[count];
        temp = head;
        for (int i = 0; i < count; i++) {
            result[i] = temp.val;
            temp = temp.next;
        }
        
        return result;
    }
    
    // Helper method to print an array
    public static void printArray(int[] arr) {
        System.out.print("[");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
            if (i < arr.length - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
    
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1: [1,2,3,4,5], k = 2 -> [2,1,4,3,5]
        System.out.println("Example 1:");
        ListNode test1 = createLinkedList(new int[]{1, 2, 3, 4, 5});
        System.out.println("Input: [1,2,3,4,5], k = 2");
        ListNode result1 = solution.reverseKGroup(test1, 2);
        System.out.print("Output: ");
        printArray(linkedListToArray(result1));
        System.out.println("Expected: [2,1,4,3,5]");
        
        // Example 2: [1,2,3,4,5], k = 3 -> [3,2,1,4,5]
        System.out.println("\nExample 2:");
        ListNode test2 = createLinkedList(new int[]{1, 2, 3, 4, 5});
        System.out.println("Input: [1,2,3,4,5], k = 3");
        ListNode result2 = solution.reverseKGroup(test2, 3);
        System.out.print("Output: ");
        printArray(linkedListToArray(result2));
        System.out.println("Expected: [3,2,1,4,5]");
        
        // Additional test: [1,2,3,4,5,6], k = 2 -> [2,1,4,3,6,5]
        System.out.println("\nAdditional test:");
        ListNode test3 = createLinkedList(new int[]{1, 2, 3, 4, 5, 6});
        System.out.println("Input: [1,2,3,4,5,6], k = 2");
        ListNode result3 = solution.reverseKGroup(test3, 2);
        System.out.print("Output: ");
        printArray(linkedListToArray(result3));
        System.out.println("Expected: [2,1,4,3,6,5]");
        
        // Edge case: [1,2,3,4,5], k = 1 -> [1,2,3,4,5]
        System.out.println("\nEdge case 1:");
        ListNode test4 = createLinkedList(new int[]{1, 2, 3, 4, 5});
        System.out.println("Input: [1,2,3,4,5], k = 1");
        ListNode result4 = solution.reverseKGroup(test4, 1);
        System.out.print("Output: ");
        printArray(linkedListToArray(result4));
        System.out.println("Expected: [1,2,3,4,5]");
        
        // Edge case: [1], k = 1 -> [1]
        System.out.println("\nEdge case 2:");
        ListNode test5 = createLinkedList(new int[]{1});
        System.out.println("Input: [1], k = 1");
        ListNode result5 = solution.reverseKGroup(test5, 1);
        System.out.print("Output: ");
        printArray(linkedListToArray(result5));
        System.out.println("Expected: [1]");
    }
}