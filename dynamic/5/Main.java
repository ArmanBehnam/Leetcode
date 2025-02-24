public class Main {
    public static void testLongestPalindrome() {
        Solution solution = new Solution();
        
        // Test case 1: Example from problem statement
        String s1 = "babad";
        String result1 = solution.longestPalindrome(s1);
        System.out.println("Test case 1:");
        System.out.println("Input: " + s1);
        System.out.println("Expected: bab or aba");
        System.out.println("Got: " + result1);
        assert result1.equals("bab") || result1.equals("aba") : "Test case 1 failed";
        
        // Test case 2: Second example
        String s2 = "cbbd";
        String result2 = solution.longestPalindrome(s2);
        System.out.println("\nTest case 2:");
        System.out.println("Input: " + s2);
        System.out.println("Expected: bb");
        System.out.println("Got: " + result2);
        assert result2.equals("bb") : "Test case 2 failed";
        
        // Test case 3: Single character
        String s3 = "a";
        String result3 = solution.longestPalindrome(s3);
        System.out.println("\nTest case 3:");
        System.out.println("Input: " + s3);
        System.out.println("Expected: a");
        System.out.println("Got: " + result3);
        assert result3.equals("a") : "Test case 3 failed";
        
        // Test case 4: All same characters
        String s4 = "aaaa";
        String result4 = solution.longestPalindrome(s4);
        System.out.println("\nTest case 4:");
        System.out.println("Input: " + s4);
        System.out.println("Expected: aaaa");
        System.out.println("Got: " + result4);
        assert result4.equals("aaaa") : "Test case 4 failed";
        
        // Test case 5: Long palindrome
        String s5 = "xababababa";
        String result5 = solution.longestPalindrome(s5);
        System.out.println("\nTest case 5:");
        System.out.println("Input: " + s5);
        System.out.println("Expected: ababababa");
        System.out.println("Got: " + result5);
        assert result5.equals("ababababa") : "Test case 5 failed";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testLongestPalindrome();
    }
}