from my import Solution

if __name__ == "__main__":
    solution = Solution()
    nums = [[-1,2,1,-4], [0,0,0]]
    targets = [1, 1]
    expected_outputs = [2, 0]
    
    # Test case 1: Example from the problem
    print(f"Input nums={nums[0]}, target={targets[0]}, expected output={expected_outputs[0]}")
    assert solution.threeSumClosest(nums[0], targets[0]) == expected_outputs[0], "Test case 1 failed"
    
    # Test case 2: All zeros
    print(f"Input nums={nums[1]}, target={targets[1]}, expected output={expected_outputs[1]}")
    assert solution.threeSumClosest(nums[1], targets[1]) == expected_outputs[1], "Test case 2 failed"
    
    
    print("All test cases passed!")