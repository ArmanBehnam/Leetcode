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
        
        // Example 1: [1,2,3,4] -> [2,1,4,3]
        System.out.println("Example 1:");
        ListNode test1 = createLinkedList(new int[]{1, 2, 3, 4});
        System.out.print("Input: ");
        printArray(new int[]{1, 2, 3, 4});
        ListNode result1 = solution.swapPairs(test1);
        System.out.print("Output: ");
        printArray(linkedListToArray(result1));
        System.out.println("Expected: [2,1,4,3]");
        
        // Example 2: [] -> []
        System.out.println("\nExample 2:");
        ListNode test2 = createLinkedList(new int[]{});
        System.out.println("Input: []");
        ListNode result2 = solution.swapPairs(test2);
        System.out.print("Output: ");
        printArray(linkedListToArray(result2));
        System.out.println("Expected: []");
        
        // Example 3: [1] -> [1]
        System.out.println("\nExample 3:");
        ListNode test3 = createLinkedList(new int[]{1});
        System.out.print("Input: ");
        printArray(new int[]{1});
        ListNode result3 = solution.swapPairs(test3);
        System.out.print("Output: ");
        printArray(linkedListToArray(result3));
        System.out.println("Expected: [1]");
        
        // Example 4: [1,2,3] -> [2,1,3]
        System.out.println("\nExample 4:");
        ListNode test4 = createLinkedList(new int[]{1, 2, 3});
        System.out.print("Input: ");
        printArray(new int[]{1, 2, 3});
        ListNode result4 = solution.swapPairs(test4);
        System.out.print("Output: ");
        printArray(linkedListToArray(result4));
        System.out.println("Expected: [2,1,3]");
    }
}