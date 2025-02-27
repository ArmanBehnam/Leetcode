from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    height1 = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
    result1 = solution.trap(height1)
    print(f"Example 1: {result1} (Expected: 6)")
    
    # Example 2
    height2 = [4, 2, 0, 3, 2, 5]
    result2 = solution.trap(height2)
    print(f"Example 2: {result2} (Expected: 9)")
    
    # Additional test - with initial zeros
    height3 = [0, 0, 5, 4, 1, 2]
    result3 = solution.trap(height3)
    print(f"Example 3: {result3} (Expected: 1)")
    
    # Large test with many repeated values
    height4 = [0] * 1000 + [10] + [5] * 1000 + [10] + [0] * 1000
    result4 = solution.trap(height4)
    print(f"Large test result: {result4} (Expected: 5000)")