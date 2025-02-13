int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    // Sort array first
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Initialize closest sum with first three numbers
    int closestSum = nums[0] + nums[1] + nums[2];
    
    // Iterate through each number as the first number
    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1;
        int right = numsSize - 1;
        
        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            
            // If we found exact target, return it
            if (currentSum == target) {
                return currentSum;
            }
            
            // Update closestSum if currentSum is closer to target
            if (abs(target - currentSum) < abs(target - closestSum)) {
                closestSum = currentSum;
            }
            
            // Move pointers based on comparison with target
            if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    return closestSum;
}