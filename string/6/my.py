class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        # Handle edge cases
        if numRows == 1 or numRows >= len(s):
            return s
        
        # Initialize rows
        rows = [''] * numRows
        
        # Variables to track direction and current row
        index = 0
        step = 1
        
        # Iterate through the string
        for char in s:
            # Add the current character to its row
            rows[index] += char
            
            # Change direction if we reach the first or last row
            if index == 0:
                step = 1
            elif index == numRows - 1:
                step = -1
            
            # Move to the next row
            index += step
        
        # Combine all rows to get the result
        return ''.join(rows)
        