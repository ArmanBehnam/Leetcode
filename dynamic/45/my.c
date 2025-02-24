int jump(int* nums, int numsSize) {
    if (numsSize <= 1) return 0;
    
    int jumps = 0;
    int currentMaxReach = 0;
    int currentBoundary = 0;
    
    for (int i = 0; i < numsSize - 1; i++) {
        currentMaxReach = (currentMaxReach > i + nums[i]) ? currentMaxReach : i + nums[i];
        
        if (i == currentBoundary) {
            jumps++;
            currentBoundary = currentMaxReach;
        }
    }
    
    return jumps;
}