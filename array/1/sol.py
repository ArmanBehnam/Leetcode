from my import Solution

if __name__ == "__main__":
    solution = Solution()
    test_input = [[2,7,11,15], [3,2,4], [3,3]]
    test_target = [9, 6, 6]
    test_output = [[0,1], [1,2], [0,1]]
    
    # Test case 1
    print(f"The input is {test_input[0]}, the target is {test_target[0]}")
    print(solution.twoSum(test_input[0], test_target[0]) == test_output[0])
    
    # Test case 2
    print(f"The input is {test_input[1]}, the target is {test_target[1]}")
    print(solution.twoSum(test_input[1], test_target[1]) == test_output[1])
    
    # Test case 3
    print(f"The input is {test_input[2]}, the target is {test_target[2]}")
    print(solution.twoSum(test_input[2], test_target[2]) == test_output[2])