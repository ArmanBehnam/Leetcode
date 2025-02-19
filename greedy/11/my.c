#include <stdio.h>

// Returns the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Returns the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxArea(int* height, int heightSize) {
    if (height == NULL || heightSize < 2) {
        return 0;
    }
    
    int left = 0;
    int right = heightSize - 1;
    int maxArea = 0;
    
    while (left < right) {
        // Calculate width between lines
        int width = right - left;
        
        // Height is limited by the shorter line
        int currentHeight = min(height[left], height[right]);
        
        // Calculate current area
        int area = width * currentHeight;
        
        // Update maxArea if current area is larger
        maxArea = max(maxArea, area);
        
        // Move the pointer of the shorter line inward
        // Since keeping the shorter line won't give us a larger area
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxArea;
}