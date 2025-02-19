import java.util.Arrays;

public class Main {
    public static void testRemoveElement() {
        Solution solution = new Solution();
        
        // Test case 1: Basic case
        int[] nums1 = {3, 2, 2, 3};
        int val1 = 3;
        int k1 = solution.removeElement(nums1, val1);
        System.out.println("Test case 1:");
        System.out.println("Input array: " + Arrays.toString(nums1) + ", val = " + val1);
        System.out.println("k = " + k1);
        System.out.println("First " + k1 + " elements (unsorted): " + 
                          Arrays.toString(Arrays.copyOfRange(nums1, 0, k1)));
        Arrays.sort(nums1, 0, k1);  // Sort first k elements
        System.out.println("First " + k1 + " elements (sorted): " + 
                          Arrays.toString(Arrays.copyOfRange(nums1, 0, k1)));
        assert k1 == 2 : "Test case 1 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums1, 0, k1), new int[]{2, 2}) :
               "Test case 1 failed: Wrong array content";
        
        // Test case 2: Multiple occurrences
        int[] nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
        int val2 = 2;
        int k2 = solution.removeElement(nums2, val2);
        System.out.println("\nTest case 2:");
        System.out.println("Input array: " + Arrays.toString(nums2) + ", val = " + val2);
        System.out.println("k = " + k2);
        System.out.println("First " + k2 + " elements (unsorted): " + 
                          Arrays.toString(Arrays.copyOfRange(nums2, 0, k2)));
        Arrays.sort(nums2, 0, k2);  // Sort first k elements
        System.out.println("First " + k2 + " elements (sorted): " + 
                          Arrays.toString(Arrays.copyOfRange(nums2, 0, k2)));
        assert k2 == 5 : "Test case 2 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums2, 0, k2), new int[]{0, 0, 1, 3, 4}) :
               "Test case 2 failed: Wrong array content";
        
        // Test case 3: Empty array
        int[] nums3 = {};
        int val3 = 1;
        int k3 = solution.removeElement(nums3, val3);
        System.out.println("\nTest case 3:");
        System.out.println("Input array: " + Arrays.toString(nums3) + ", val = " + val3);
        System.out.println("k = " + k3);
        assert k3 == 0 : "Test case 3 failed: Wrong k value";
        
        // Test case 4: No elements to remove
        int[] nums4 = {1, 2, 3, 4};
        int val4 = 5;
        int k4 = solution.removeElement(nums4, val4);
        System.out.println("\nTest case 4:");
        System.out.println("Input array: " + Arrays.toString(nums4) + ", val = " + val4);
        System.out.println("k = " + k4);
        System.out.println("First " + k4 + " elements (unsorted): " + 
                          Arrays.toString(Arrays.copyOfRange(nums4, 0, k4)));
        Arrays.sort(nums4, 0, k4);  // Sort first k elements
        System.out.println("First " + k4 + " elements (sorted): " + 
                          Arrays.toString(Arrays.copyOfRange(nums4, 0, k4)));
        assert k4 == 4 : "Test case 4 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums4, 0, k4), new int[]{1, 2, 3, 4}) :
               "Test case 4 failed: Wrong array content";
        
        // Test case 5: All elements to be removed
        int[] nums5 = {1, 1, 1};
        int val5 = 1;
        int k5 = solution.removeElement(nums5, val5);
        System.out.println("\nTest case 5:");
        System.out.println("Input array: " + Arrays.toString(nums5) + ", val = " + val5);
        System.out.println("k = " + k5);
        assert k5 == 0 : "Test case 5 failed: Wrong k value";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testRemoveElement();
    }
}