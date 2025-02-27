#include <stdio.h>
#include <assert.h>
#include <time.h>

public static void main(String[] args) {
    Solution solution = new Solution();
    
    // Example 1
    String s1 = "(()";
    int result1 = solution.longestValidParentheses(s1);
    System.out.println("Example 1: \"" + s1 + "\" -> " + result1 + " (Expected: 2)");
    
    // Example 2
    String s2 = ")()())";
    int result2 = solution.longestValidParentheses(s2);
    System.out.println("Example 2: \"" + s2 + "\" -> " + result2 + " (Expected: 4)");
    
    // Example 3
    String s3 = "";
    int result3 = solution.longestValidParentheses(s3);
    System.out.println("Example 3: \"" + s3 + "\" -> " + result3 + " (Expected: 0)");
    
    // Additional test
    String s4 = "()(())";
    int result4 = solution.longestValidParentheses(s4);
    System.out.println("Additional test: \"" + s4 + "\" -> " + result4 + " (Expected: 6)");
}