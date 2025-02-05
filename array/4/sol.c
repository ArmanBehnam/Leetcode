#include <stdio.h>
#include <stdlib.h>

// Function declaration
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

// Helper function to print array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(",");
    }
    printf("]");
}

int main() {
    // Test case 1
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
    
    printf("Test case 1:\n");
    printf("Input: nums1 = ");
    printArray(nums1, nums1Size);
    printf(", nums2 = ");
    printArray(nums2, nums2Size);
    printf("\n");
    double result1 = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
    printf("Output: %.5f\n\n", result1);
    
    // Test case 2
    int nums3[] = {1, 2};
    int nums4[] = {3, 4};
    int nums3Size = sizeof(nums3) / sizeof(nums3[0]);
    int nums4Size = sizeof(nums4) / sizeof(nums4[0]);
    
    printf("Test case 2:\n");
    printf("Input: nums1 = ");
    printArray(nums3, nums3Size);
    printf(", nums2 = ");
    printArray(nums4, nums4Size);
    printf("\n");
    double result2 = findMedianSortedArrays(nums3, nums3Size, nums4, nums4Size);
    printf("Output: %.5f\n\n", result2);
    
    return 0;
}