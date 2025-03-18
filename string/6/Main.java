public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        String s1 = "PAYPALISHIRING";
        int numRows1 = 3;
        System.out.println("Example 1:");
        System.out.println("Input: s = \"" + s1 + "\", numRows = " + numRows1);
        String result1 = solution.convert(s1, numRows1);
        System.out.println("Output: \"" + result1 + "\"");
        String expected1 = "PAHNAPLSIIGYIR";
        System.out.println("Expected: \"" + expected1 + "\"");
        System.out.println("Test passed: " + result1.equals(expected1));
        
        // Example 2
        String s2 = "PAYPALISHIRING";
        int numRows2 = 4;
        System.out.println("\nExample 2:");
        System.out.println("Input: s = \"" + s2 + "\", numRows = " + numRows2);
        String result2 = solution.convert(s2, numRows2);
        System.out.println("Output: \"" + result2 + "\"");
        String expected2 = "PINALSIGYAHRPI";
        System.out.println("Expected: \"" + expected2 + "\"");
        System.out.println("Test passed: " + result2.equals(expected2));
        
        // Example 3
        String s3 = "A";
        int numRows3 = 1;
        System.out.println("\nExample 3:");
        System.out.println("Input: s = \"" + s3 + "\", numRows = " + numRows3);
        String result3 = solution.convert(s3, numRows3);
        System.out.println("Output: \"" + result3 + "\"");
        String expected3 = "A";
        System.out.println("Expected: \"" + expected3 + "\"");
        System.out.println("Test passed: " + result3.equals(expected3));
        
        System.out.println("\nAll test cases completed!");
    }
}