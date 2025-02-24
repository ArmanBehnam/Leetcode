#include <stdio.h>
#include <assert.h>
#include <time.h>

// Function declaration
int jump(int* nums, int numsSize);

void runTest(int* nums, int size, int expected, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input: [");
    for (int i = 0; i < size; i++) {
        printf("%d%s", nums[i], i < size - 1 ? "," : "");
    }
    printf("]\n");
    printf("Expected: %d\n", expected);
    
    int result = jump(nums, size);
    printf("Got: %d\n", result);
    
    assert(result == expected);
    printf("Test case %d passed!\n\n", testCase);
}

void runPerformanceTest() {
    printf("Running performance test...\n");
    
    int largeArray[10000];
    for (int i = 0; i < 10000; i++) {
        largeArray[i] = 1;
    }
    
    clock_t start = clock();
    
    for (int i = 0; i < 100; i++) {
        jump(largeArray, 10000);
    }
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Performance test completed in: %f seconds\n\n", time_spent);
}

int main() {
    // Run performance test
    runPerformanceTest();
    
    // Test case 1: Example from problem statement
    int nums1[] = {2,3,1,1,4};
    runTest(nums1, 5, 2, 1);
    
    // Test case 2: Second example
    int nums2[] = {2,3,0,1,4};
    runTest(nums2, 5, 2, 2);
    
    // Test case 3: Single element array
    int nums3[] = {1};
    runTest(nums3, 1, 0, 3);
    
    // Test case 4: Minimum jumps needed
    int nums4[] = {1,1,1,1};
    runTest(nums4, 4, 3, 4);
    
    // Test case 5: Large jumps
    int nums5[] = {5,9,3,2,1,0,2,3,3,1,0,0};
    runTest(nums5, 12, 3, 5);
    
    printf("All test cases passed!\n");
    return 0;
}