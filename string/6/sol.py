from my import Solution

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    print("Example 1:")
    s1 = "PAYPALISHIRING"
    numRows1 = 3
    print(f"Input: s = \"{s1}\", numRows = {numRows1}")
    result1 = solution.convert(s1, numRows1)
    print(f"Output: \"{result1}\"")
    expected1 = "PAHNAPLSIIGYIR"
    print(f"Expected: \"{expected1}\"")
    print(f"Test passed: {result1 == expected1}")
    
    # Example 2
    print("\nExample 2:")
    s2 = "PAYPALISHIRING"
    numRows2 = 4
    print(f"Input: s = \"{s2}\", numRows = {numRows2}")
    result2 = solution.convert(s2, numRows2)
    print(f"Output: \"{result2}\"")
    expected2 = "PINALSIGYAHRPI"
    print(f"Expected: \"{expected2}\"")
    print(f"Test passed: {result2 == expected2}")
    
    # Example 3
    print("\nExample 3:")
    s3 = "A"
    numRows3 = 1
    print(f"Input: s = \"{s3}\", numRows = {numRows3}")
    result3 = solution.convert(s3, numRows3)
    print(f"Output: \"{result3}\"")
    expected3 = "A"
    print(f"Expected: \"{expected3}\"")
    print(f"Test passed: {result3 == expected3}")
    
    print("\nAll test cases completed!")