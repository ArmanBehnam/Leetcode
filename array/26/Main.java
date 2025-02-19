import java.util.Arrays;

public class Main {
    public static void testRemoveDuplicates() {
        Solution solution = new Solution();
        
        // Test case 1: Basic case with few duplicates
        int[] nums1 = {1, 1, 2};
        int k1 = solution.removeDuplicates(nums1);
        System.out.println("Test case 1:");
        System.out.println("Input array: " + Arrays.toString(nums1));
        System.out.println("k = " + k1);
        System.out.println("First " + k1 + " elements: " + 
                          Arrays.toString(Arrays.copyOfRange(nums1, 0, k1)));
        assert k1 == 2 : "Test case 1 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums1, 0, k1), new int[]{1, 2}) :
               "Test case 1 failed: Wrong array content";
        
        // Test case 2: Array with more duplicates
        int[] nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        int k2 = solution.removeDuplicates(nums2);
        System.out.println("\nTest case 2:");
        System.out.println("Input array: " + Arrays.toString(nums2));
        System.out.println("k = " + k2);
        System.out.println("First " + k2 + " elements: " + 
                          Arrays.toString(Arrays.copyOfRange(nums2, 0, k2)));
        assert k2 == 5 : "Test case 2 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums2, 0, k2), new int[]{0, 1, 2, 3, 4}) :
               "Test case 2 failed: Wrong array content";
        
        // Test case 3: Array with no duplicates
        int[] nums3 = {1, 2, 3};
        int k3 = solution.removeDuplicates(nums3);
        System.out.println("\nTest case 3:");
        System.out.println("Input array: " + Arrays.toString(nums3));
        System.out.println("k = " + k3);
        System.out.println("First " + k3 + " elements: " + 
                          Arrays.toString(Arrays.copyOfRange(nums3, 0, k3)));
        assert k3 == 3 : "Test case 3 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums3, 0, k3), new int[]{1, 2, 3}) :
               "Test case 3 failed: Wrong array content";
        
        // Test case 4: Array with single element
        int[] nums4 = {1};
        int k4 = solution.removeDuplicates(nums4);
        System.out.println("\nTest case 4:");
        System.out.println("Input array: " + Arrays.toString(nums4));
        System.out.println("k = " + k4);
        System.out.println("First " + k4 + " elements: " + 
                          Arrays.toString(Arrays.copyOfRange(nums4, 0, k4)));
        assert k4 == 1 : "Test case 4 failed: Wrong k value";
        assert Arrays.equals(Arrays.copyOfRange(nums4, 0, k4), new int[]{1}) :
               "Test case 4 failed: Wrong array content";
        
        // Test case 5: Null array
        int[] nums5 = null;
        int k5 = solution.removeDuplicates(nums5);
        System.out.println("\nTest case 5:");
        System.out.println("Input array: null");
        System.out.println("k = " + k5);
        assert k5 == 0 : "Test case 5 failed: Wrong k value";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testRemoveDuplicates();
    }
}