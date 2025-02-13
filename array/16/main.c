#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Include the solution
int threeSumClosest(int* nums, int numsSize, int target);

void runTest(int* nums, int numsSize, int target, int expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("nums = [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) printf(", ");
    }
    printf("], target = %d, expected = %d\n", target, expected);
    
    int result = threeSumClosest(nums, numsSize, target);
    assert(result == expected);
    printf("Test case %d passed!\n\n", testCase);
}

int main() {
    // Test case 1: Example from the problem
    int nums1[] = {-1, 2, 1, -4};
    runTest(nums1, 4, 1, 2, 1);
    
    // Test case 2: All zeros
    int nums2[] = {0, 0, 0};
    runTest(nums2, 3, 1, 0, 2);
    
    
    printf("All test cases passed!\n");
    return 0;
}