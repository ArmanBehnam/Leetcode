public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        // Example 1
        String haystack1 = "sadbutsad";
        String needle1 = "sad";
        int result1 = solution.strStr(haystack1, needle1);
        System.out.println("Example 1: " + result1 + " (Expected: 0)");
        
        // Example 2
        String haystack2 = "leetcode";
        String needle2 = "leeto";
        int result2 = solution.strStr(haystack2, needle2);
        System.out.println("Example 2: " + result2 + " (Expected: -1)");
        
        // Additional test - repeated pattern
        String haystack3 = "mississippi";
        String needle3 = "issip";
        int result3 = solution.strStr(haystack3, needle3);
        System.out.println("Example 3: " + result3 + " (Expected: 4)");
        
        // Edge case - single character
        String haystack4 = "hello";
        String needle4 = "l";
        int result4 = solution.strStr(haystack4, needle4);
        System.out.println("Example 4: " + result4 + " (Expected: 2)");
    }
}