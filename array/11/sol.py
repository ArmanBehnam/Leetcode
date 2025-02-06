from my import Solution

if __name__ == "__main__":
    solution = Solution()
    height = [[1,8,6,2,5,4,8,3,7], [1,1], [1,2,3,4,5], [5,4,3,2,1], [4,4,4,4]]
    max_area = [49, 1, 6, 6, 12]
    # Test case 1: Example from the problem
    print(f"The height is {height[0]}, and the output should be {max_area[0]}")
    assert solution.maxArea(height[0]) == max_area[0], "Test case 1 failed"
    
    # Test case 2: Minimum case with two elements
    print(f"The height is {height[1]}, and the output should be {max_area[1]}")
    assert solution.maxArea(height[1]) == max_area[1], "Test case 1 failed"
    
    # Test case 3: Ascending heights
    print(f"The height is {height[2]}, and the output should be {max_area[2]}")
    assert solution.maxArea(height[2]) == max_area[2], "Test case 1 failed"
    
    # Test case 4: Descending heights
    print(f"The height is {height[3]}, and the output should be {max_area[3]}")
    assert solution.maxArea(height[3]) == max_area[3], "Test case 1 failed"
    
    # Test case 5: All same heights
    print(f"The height is {height[4]}, and the output should be {max_area[4]}")
    assert solution.maxArea(height[4]) == max_area[4], "Test case 1 failed"
    
    print("All test cases passed!")