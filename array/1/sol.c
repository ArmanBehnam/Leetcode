#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(",");
    }
    printf("]");
}

int main() {
    // Test cases
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {3, 2, 4};
    int nums3[] = {3, 3};
    int targets[] = {9, 6, 6};
    int sizes[] = {4, 3, 2};
    int returnSize;
    
    int* testArrays[] = {nums1, nums2, nums3};
    
    for (int i = 0; i < 3; i++) {
        printf("Test case %d:\n", i + 1);
        printf("Input: nums = ");
        printArray(testArrays[i], sizes[i]);
        printf(", target = %d\n", targets[i]);
        
        int* result = twoSum(testArrays[i], sizes[i], targets[i], &returnSize);
        printf("Output: ");
        printArray(result, 2);
        printf("\n\n");
        
        free(result);
    }  
    return 0;
}