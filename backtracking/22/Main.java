import java.util.List;

public class Main {
    public static void testParenthesisGenerator() {
        Solution solution = new Solution();
        
        // Test case 1: Example from problem statement
        int n1 = 3;
        List<String> result1 = solution.generateParenthesis(n1);
        System.out.println("Test case 1:");
        System.out.println("Input: n = " + n1);
        System.out.println("Expected: [\"((()))\", \"(()())\", \"(())()\", \"()(())\", \"()()()\"]");
        System.out.println("Got: " + result1);
        
        // Test case 2: Second example
        int n2 = 1;
        List<String> result2 = solution.generateParenthesis(n2);
        System.out.println("\nTest case 2:");
        System.out.println("Input: n = " + n2);
        System.out.println("Expected: [\"()\"]");
        System.out.println("Got: " + result2);
        
        // Test case 3: Additional example
        int n3 = 2;
        List<String> result3 = solution.generateParenthesis(n3);
        System.out.println("\nTest case 3:");
        System.out.println("Input: n = " + n3);
        System.out.println("Expected: [\"(())\", \"()()\"]");
        System.out.println("Got: " + result3);
        
        System.out.println("\nAll test cases completed!");
    }
    
    public static void main(String[] args) {
        testParenthesisGenerator();
    }
}