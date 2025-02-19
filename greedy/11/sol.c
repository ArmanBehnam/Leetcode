#include <stdio.h>
#include <assert.h>

// Function declaration from solution.c
int maxArea(int* height, int heightSize);

void testContainerWithMostWater() {
    // Test case 1: Example from the problem
    int height1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size1 = sizeof(height1) / sizeof(height1[0]);
    assert(maxArea(height1, size1) == 49 && "Test case 1 failed");
    
    // Test case 2: Minimum case with two elements
    int height2[] = {1, 1};
    int size2 = sizeof(height2) / sizeof(height2[0]);
    assert(maxArea(height2, size2) == 1 && "Test case 2 failed");
    
    // Test case 3: Ascending heights
    int height3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(height3) / sizeof(height3[0]);
    assert(maxArea(height3, size3) == 6 && "Test case 3 failed");
    
    // Test case 4: Descending heights
    int height4[] = {5, 4, 3, 2, 1};
    int size4 = sizeof(height4) / sizeof(height4[0]);
    assert(maxArea(height4, size4) == 6 && "Test case 4 failed");
    
    // Test case 5: All same heights
    int height5[] = {4, 4, 4, 4};
    int size5 = sizeof(height5) / sizeof(height5[0]);
    assert(maxArea(height5, size5) == 12 && "Test case 5 failed");
    
    printf("All test cases passed!\n");
}

int main() {
    testContainerWithMostWater();
    return 0;
}