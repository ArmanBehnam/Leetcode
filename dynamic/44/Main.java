public class Main {
    public static void testWildcardMatching() {
        Solution solution = new Solution();
        
        // Test case 1: Basic non-matching case
        String s1 = "aa";
        String p1 = "a";
        boolean result1 = solution.isMatch(s1, p1);
        System.out.println("Test case 1:");
        System.out.println("String: " + s1);
        System.out.println("Pattern: " + p1);
        System.out.println("Expected: false");
        System.out.println("Got: " + result1);
        assert !result1 : "Test case 1 failed";
        
        // Test case 2: Star pattern
        String s2 = "aa";
        String p2 = "*";
        boolean result2 = solution.isMatch(s2, p2);
        System.out.println("\nTest case 2:");
        System.out.println("String: " + s2);
        System.out.println("Pattern: " + p2);
        System.out.println("Expected: true");
        System.out.println("Got: " + result2);
        assert result2 : "Test case 2 failed";
        
        // Test case 3: Question mark pattern
        String s3 = "cb";
        String p3 = "?a";
        boolean result3 = solution.isMatch(s3, p3);
        System.out.println("\nTest case 3:");
        System.out.println("String: " + s3);
        System.out.println("Pattern: " + p3);
        System.out.println("Expected: false");
        System.out.println("Got: " + result3);
        assert !result3 : "Test case 3 failed";
        
        // Test case 4: Complex pattern
        String s4 = "adceb";
        String p4 = "*a*b";
        boolean result4 = solution.isMatch(s4, p4);
        System.out.println("\nTest case 4:");
        System.out.println("String: " + s4);
        System.out.println("Pattern: " + p4);
        System.out.println("Expected: true");
        System.out.println("Got: " + result4);
        assert result4 : "Test case 4 failed";
        
        // Test case 5: Empty string and pattern
        String s5 = "";
        String p5 = "";
        boolean result5 = solution.isMatch(s5, p5);
        System.out.println("\nTest case 5:");
        System.out.println("String: " + s5);
        System.out.println("Pattern: " + p5);
        System.out.println("Expected: true");
        System.out.println("Got: " + result5);
        assert result5 : "Test case 5 failed";
        
        // Test case 6: Multiple stars
        String s6 = "abcde";
        String p6 = "a*c*e";
        boolean result6 = solution.isMatch(s6, p6);
        System.out.println("\nTest case 6:");
        System.out.println("String: " + s6);
        System.out.println("Pattern: " + p6);
        System.out.println("Expected: true");
        System.out.println("Got: " + result6);
        assert result6 : "Test case 6 failed";
        
        System.out.println("\nAll test cases passed!");
    }
    
    public static void main(String[] args) {
        testWildcardMatching();
    }
}