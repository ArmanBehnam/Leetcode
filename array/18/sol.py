from my import Solution

if __name__ == "__main__":
    solution = Solution()
    nums = [[1,0,-1,0,-2,2], [2,2,2,2,2]]
    targets = [0, 8]
    expected_outputs = [[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]], [[2,2,2,2]]]
    
    # Test case 1:
    print(f"Input nums={nums[0]}, target={targets[0]}, expected output={expected_outputs[0]}")
    assert solution.fourSum(nums[0], targets[0]) == expected_outputs[0], "Test case 1 failed"
    
    # Test case 2:
    print(f"Input nums={nums[1]}, target={targets[1]}, expected output={expected_outputs[1]}")
    assert solution.fourSum(nums[1], targets[1]) == expected_outputs[1], "Test case 2 failed"
    
    
    print("All test cases passed!")