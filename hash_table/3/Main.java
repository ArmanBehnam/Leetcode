public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        String s1 = "abcabcbb";
        System.out.println("Example 1:");
        System.out.println("Input: s = \"" + s1 + "\"");
        int result1 = solution.lengthOfLongestSubstring(s1);
        System.out.println("Output: " + result1);
        System.out.println("Expected: 3");
        System.out.println("Test passed: " + (result1 == 3));
        
        // Example 2
        System.out.println("\nExample 2:");
        String s2 = "bbbbb";
        System.out.println("Input: s = \"" + s2 + "\"");
        int result2 = solution.lengthOfLongestSubstring(s2);
        System.out.println("Output: " + result2);
        System.out.println("Expected: 1");
        System.out.println("Test passed: " + (result2 == 1));
        
        // Example 3
        System.out.println("\nExample 3:");
        String s3 = "pwwkew";
        System.out.println("Input: s = \"" + s3 + "\"");
        int result3 = solution.lengthOfLongestSubstring(s3);
        System.out.println("Output: " + result3);
        System.out.println("Expected: 3");
        System.out.println("Test passed: " + (result3 == 3));
    }
}