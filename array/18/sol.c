/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    // Initialize return size to 0
    *returnSize = 0;
    
    // Handle edge cases
    if (numsSize < 4) {
        *returnColumnSizes = NULL;
        return NULL;
    }
    
    // Sort the array
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    
    // Allocate initial memory for results
    int maxResults = 1000; // Initial capacity
    int** result = (int**)malloc(maxResults * sizeof(int*));
    *returnColumnSizes = (int*)malloc(maxResults * sizeof(int));
    
    for (int i = 0; i < numsSize - 3; i++) {
        // Skip duplicates for first number
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        for (int j = i + 1; j < numsSize - 2; j++) {
            // Skip duplicates for second number
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            
            int left = j + 1;
            int right = numsSize - 1;
            
            while (left < right) {
                // Use long long to handle potential overflow
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                
                if (sum == target) {
                    // Allocate new array for this quadruplet
                    result[*returnSize] = (int*)malloc(4 * sizeof(int));
                    result[*returnSize][0] = nums[i];
                    result[*returnSize][1] = nums[j];
                    result[*returnSize][2] = nums[left];
                    result[*returnSize][3] = nums[right];
                    (*returnColumnSizes)[*returnSize] = 4;
                    (*returnSize)++;
                    
                    // Skip duplicates for third number
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicates for fourth number
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }
    
    // Reallocate to exact size if needed
    if (*returnSize < maxResults) {
        *returnColumnSizes = realloc(*returnColumnSizes, (*returnSize) * sizeof(int));
        result = realloc(result, (*returnSize) * sizeof(int*));
    }
    
    return result;
}