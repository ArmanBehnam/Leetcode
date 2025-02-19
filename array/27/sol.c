int removeElement(int* nums, int numsSize, int val) {
    // Initialize pointer for position to place non-val elements
    int k = 0;
    
    // Iterate through array
    for (int i = 0; i < numsSize; i++) {
        // If current element is not val, place it at position k
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}