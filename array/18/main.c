#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Function declaration
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes);

// Helper function to print array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

// Helper function to print result
void printResult(int** result, int returnSize, int* returnColumnSizes) {
    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printArray(result[i], returnColumnSizes[i]);
        if (i < returnSize - 1) printf(", ");
    }
    printf("]\n");
}

void runTest(int* nums, int numsSize, int target, int expectedSize, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("nums = ");
    printArray(nums, numsSize);
    printf(", target = %d\n", target);
    
    int returnSize;
    int* returnColumnSizes;
    int** result = fourSum(nums, numsSize, target, &returnSize, &returnColumnSizes);
    
    printf("Result: ");
    printResult(result, returnSize, returnColumnSizes);
    printf("Return size: %d\n", returnSize);
    
    // Assert the return size matches expected size
    assert(returnSize == expectedSize);
    
    // Free allocated memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);
    
    printf("Test case %d passed!\n\n", testCase);
}

int main() {
    // Test case 1: Example from the problem
    int nums1[] = {1, 0, -1, 0, -2, 2};
    runTest(nums1, 6, 0, 3, 1);  // Expected 3 quadruplets
    
    // Test case 2: All same numbers
    int nums2[] = {2, 2, 2, 2, 2};
    runTest(nums2, 5, 8, 1, 2);  // Expected 1 quadruplet
    
    // Test case 3: No solution
    int nums3[] = {1, 2, 3, 4};
    runTest(nums3, 4, 100, 0, 3);  // Expected 0 quadruplets
    
    printf("All test cases passed!\n");
    return 0;
}