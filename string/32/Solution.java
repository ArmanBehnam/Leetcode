import java.util.Stack;

class Solution {
    public int longestValidParentheses(String s) {
        // Edge case: empty string
        if (s == null || s.length() == 0) {
            return 0;
        }
        
        // Stack to store indices of characters
        Stack<Integer> stack = new Stack<>();
        stack.push(-1); // Initialize with -1 as base for empty stack calculations
        int maxLength = 0;
        
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s.charAt(i);
            
            if (currentChar == '(') {
                // Push the index of opening parenthesis
                stack.push(i);
            } else { // currentChar == ')'
                // Pop the last opening parenthesis or base
                stack.pop();
                
                if (stack.isEmpty()) {
                    // If stack is empty, push current index as new base
                    stack.push(i);
                } else {
                    // Calculate length of valid substring ending at current position
                    // Current index minus the last index in stack
                    maxLength = Math.max(maxLength, i - stack.peek());
                }
            }
        }
        
        return maxLength;
    }
}