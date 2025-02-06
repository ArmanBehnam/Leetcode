#include <stdio.h>
#include <stdlib.h>
#include <float.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is the shorter array
    if (nums1Size > nums2Size) {
        int* tempArr = nums1;
        nums1 = nums2;
        nums2 = tempArr;
        int tempSize = nums1Size;
        nums1Size = nums2Size;
        nums2Size = tempSize;
    }
    
    int m = nums1Size;
    int n = nums2Size;
    int totalLength = m + n;
    int half = (totalLength + 1) / 2;
    
    int left = 0;
    int right = m;
    
    while (left <= right) {
        int partition1 = (left + right) / 2;
        int partition2 = half - partition1;
        
        // Get left and right elements for both arrays
        double left1 = (partition1 == 0) ? (-1.0 * DBL_MAX) : nums1[partition1 - 1];
        double right1 = (partition1 == m) ? DBL_MAX : nums1[partition1];
        double left2 = (partition2 == 0) ? (-1.0 * DBL_MAX) : nums2[partition2 - 1];
        double right2 = (partition2 == n) ? DBL_MAX : nums2[partition2];
        
        if (left1 <= right2 && left2 <= right1) {
            if (totalLength % 2 == 1) {
                return left1 > left2 ? left1 : left2;
            }
            double maxLeft = left1 > left2 ? left1 : left2;
            double minRight = right1 < right2 ? right1 : right2;
            return (maxLeft + minRight) / 2.0;
        }
        else if (left1 > right2) {
            right = partition1 - 1;
        }
        else {
            left = partition1 + 1;
        }
    }
    
    return 0.0; // This should never be reached if arrays are sorted
}