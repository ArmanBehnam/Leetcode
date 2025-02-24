#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool canJump(int* nums, int numsSize);

void runTest(int* nums, int size, bool expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input: [");
    for (int i = 0; i < size; i++) {
        printf("%d%s", nums[i], i < size - 1 ? "," : "");
    }
    printf("]\n");
    printf("Expected: %s\n", expected ? "true" : "false");
    
    bool result = canJump(nums, size);
    printf("Got: %s\n", result ? "true" : "false");
    
    assert(result == expected);
    printf("Test case %d passed!\n\n", testCase);
}

int main() {
    // Test case 1: Jump possible
    int nums1[] = {2,3,1,1,4};
    runTest(nums1, 5, true, 1);
    
    // Test case 2: Jump impossible due to zero
    int nums2[] = {3,2,1,0,4};
    runTest(nums2, 5, false, 2);
    
    // Test case 3: Single element
    int nums3[] = {0};
    runTest(nums3, 1, true, 3);
    
    // Test case 4: Zeros except first
    int nums4[] = {2,0,0,0};
    runTest(nums4, 4, true, 4);
    
    // Test case 5: Zero trap
    int nums5[] = {1,0,1,0};
    runTest(nums5, 4, false, 5);
    
    printf("All test cases passed!\n");
    return 0;
}