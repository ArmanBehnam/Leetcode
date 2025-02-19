#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

// Include the solution
int removeElement(int* nums, int numsSize, int val);

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

// Helper function to sort array segment
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void runTest(int* nums, int numsSize, int val, int expectedK, int* expectedNums, int testCase) {
    printf("Test case %d:\n", testCase);
    printf("Input array: ");
    printArray(nums, numsSize);
    printf(", val = %d\n", val);
    
    int k = removeElement(nums, numsSize, val);
    
    printf("k = %d\n", k);
    
    if (k > 0) {
        printf("First %d elements (unsorted): ", k);
        printArray(nums, k);
        printf("\n");
        
        // Sort first k elements
        sortArray(nums, k);
        
        printf("First %d elements (sorted): ", k);
        printArray(nums, k);
        printf("\n");
    }
    
    // Verify k
    assert(k == expectedK);
    
    // Verify first k elements if k > 0
    if (k > 0) {
        sortArray(expectedNums, k);  // Sort expected array for comparison
        assert(arraysEqual(nums, expectedNums, k));
    }
    
    printf("Test case %d passed!\n\n", testCase);
}

int main() {
    // Test case 1: Basic case
    int nums1[] = {3, 2, 2, 3};
    int expected1[] = {2, 2};
    runTest(nums1, 4, 3, 2, expected1, 1);
    
    // Test case 2: Multiple occurrences
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int expected2[] = {0, 0, 1, 3, 4};
    runTest(nums2, 8, 2, 5, expected2, 2);
    
    // Test case 3: Empty array
    int nums3[] = {};
    int expected3[] = {};
    runTest(nums3, 0, 1, 0, expected3, 3);
    
    // Test case 4: No elements to remove
    int nums4[] = {1, 2, 3, 4};
    int expected4[] = {1, 2, 3, 4};
    runTest(nums4, 4, 5, 4, expected4, 4);
    
    // Test case 5: All elements to be removed
    int nums5[] = {1, 1, 1};
    int expected5[] = {};
    runTest(nums5, 3, 1, 0, expected5, 5);
    
    printf("All test cases passed!\n");
    return 0;
}