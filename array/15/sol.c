/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    // Initialize return size to 0
    *returnSize = 0;
    
    // Handle edge cases
    if (nums == NULL || numsSize < 3) {
        *returnColumnSizes = NULL;
        return NULL;
    }
    
    // Sort the array first
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Allocate maximum possible space
    // Maximum possible triplets is O(n^2) but we'll allocate a reasonable size
    int maxSize = numsSize * numsSize;
    int** result = (int**)malloc(maxSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(maxSize * sizeof(int));
    
    // For each potential first number
    for (int i = 0; i < numsSize - 2; i++) {
        // Skip duplicates for i
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        
        // Use two pointers technique
        int left = i + 1;
        int right = numsSize - 1;
        
        while (left < right) {
            long sum = (long)nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                // Found a valid triplet
                result[*returnSize] = (int*)malloc(3 * sizeof(int));
                result[*returnSize][0] = nums[i];
                result[*returnSize][1] = nums[left];
                result[*returnSize][2] = nums[right];
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;
                
                // Skip duplicates for left and right
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    // Reallocate to exact size if needed
    if (*returnSize < maxSize) {
        *returnColumnSizes = realloc(*returnColumnSizes, (*returnSize) * sizeof(int));
        result = realloc(result, (*returnSize) * sizeof(int*));
    }
    
    return result;
}