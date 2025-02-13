from my import Solution

if __name__ == "__main__":
    solution = Solution()
    Input = [[-1,0,1,2,-1,-4], [0,1,1], [0,0,0]]
    Output = [[[-1,-1,2],[-1,0,1]], [], [[0,0,0]]]

    # Test case 1
    print(f"The Input is {Input[0]}, and the output should be {Output[0]}")
    assert solution.threeSum(Input[0]) == Output[0], "Test case 1 failed"
    
    # Test case 2
    print(f"The Input is {Input[1]}, and the output should be {Output[1]}")
    assert solution.threeSum(Input[1]) == Output[1], "Test case 1 failed"
    
    # Test case 3
    print(f"The Input is {Input[2]}, and the output should be {Output[2]}")
    assert solution.threeSum(Input[2]) == Output[2], "Test case 1 failed"
    
    print("All test cases passed!")