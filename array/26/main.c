#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// Include the solution
int removeDuplicates(int* nums, int numsSize);

// Helper function to print array
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

// Helper function to compare arrays
bool arraysEqual(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

void runTest(int* nums, int numsSize, int expectedK, int* expectedNums, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input array: ");
    printArray(nums, numsSize);
    printf("\n");
    
    int k = removeDuplicates(nums, numsSize);
    
    printf("k = %d\n", k);
    printf("First %d elements: ", k);
    printArray(nums, k);
    printf("\n");
    
    // Verify k
    assert(k == expectedK);
    
    // Verify first k elements
    assert(arraysEqual(nums, expectedNums, k));
    
    printf("Test case %d passed!\n\n", testCase);
}

int main() {
    // Test case 1: Basic case with few duplicates
    int nums1[] = {1, 1, 2};
    int expected1[] = {1, 2};
    runTest(nums1, 3, 2, expected1, 1);
    
    // Test case 2: Array with more duplicates
    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int expected2[] = {0, 1, 2, 3, 4};
    runTest(nums2, 10, 5, expected2, 2);
    
    // Test case 3: Array with no duplicates
    int nums3[] = {1, 2, 3};
    int expected3[] = {1, 2, 3};
    runTest(nums3, 3, 3, expected3, 3);
    
    // Test case 4: Array with single element
    int nums4[] = {1};
    int expected4[] = {1};
    runTest(nums4, 1, 1, expected4, 4);
    
    // Test case 5: Empty array
    int nums5[] = {};
    int expected5[] = {};
    runTest(nums5, 0, 0, expected5, 5);
    
    printf("All test cases passed!\n");
    return 0;
}