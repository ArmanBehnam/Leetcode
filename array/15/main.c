int main() {
    // Test case 1
    int nums1[] = {-1, 0, 1, 2, -1, -4};
    int returnSize1;
    int* returnColumnSizes1;
    int** result1 = threeSum(nums1, 6, &returnSize1, &returnColumnSizes1);
    
    // Print results
    printf("Test case 1 results:\n");
    for (int i = 0; i < returnSize1; i++) {
        printf("[%d,%d,%d]\n", result1[i][0], result1[i][1], result1[i][2]);
    }
    
    // Free memory
    for (int i = 0; i < returnSize1; i++) {
        free(result1[i]);
    }
    free(result1);
    free(returnColumnSizes1);
    
    return 0;
}