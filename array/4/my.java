class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        // Ensure nums1 is the shorter array
        if (nums1.length > nums2.length) {
            int[] temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }
        
        int m = nums1.length;
        int n = nums2.length;
        int totalLength = m + n;
        int half = (totalLength + 1) / 2;
        
        int left = 0;
        int right = m;
        
        while (left <= right) {
            int partition1 = (left + right) / 2;
            int partition2 = half - partition1;
            
            // Get left and right elements for both arrays
            double left1 = (partition1 == 0) ? Double.NEGATIVE_INFINITY : nums1[partition1 - 1];
            double right1 = (partition1 == m) ? Double.POSITIVE_INFINITY : nums1[partition1];
            double left2 = (partition2 == 0) ? Double.NEGATIVE_INFINITY : nums2[partition2 - 1];
            double right2 = (partition2 == n) ? Double.POSITIVE_INFINITY : nums2[partition2];
            
            // Check if we found the correct partition
            if (left1 <= right2 && left2 <= right1) {
                // If total length is odd
                if (totalLength % 2 == 1) {
                    return Math.max(left1, left2);
                }
                // If total length is even
                return (Math.max(left1, left2) + Math.min(right1, right2)) / 2.0;
            }
            // If partition is too far right
            else if (left1 > right2) {
                right = partition1 - 1;
            }
            // If partition is too far left
            else {
                left = partition1 + 1;
            }
        }
        
        throw new IllegalArgumentException("Input arrays are not sorted");
    }
}

// The solution maintains O(log(min(m,n))) time complexity and O(1) space complexity. 

// It handles all the constraints mentioned in the problem:
// Array lengths can be different (0 ≤ m,n ≤ 1000)
// Total length is at least 1 (1 ≤ m + n ≤ 2000)
// Elements can be negative or positive (-106 ≤ nums1[i], nums2[i] ≤ 106)