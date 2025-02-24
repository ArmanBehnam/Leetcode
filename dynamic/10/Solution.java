class Solution {
    private Boolean[][] memo;
    private String s, p;
    
    public boolean isMatch(String s, String p) {
        this.s = s;
        this.p = p;
        this.memo = new Boolean[s.length() + 1][p.length() + 1];
        return dp(0, 0);
    }
    
    private boolean dp(int i, int j) {
        if (memo[i][j] != null) {
            return memo[i][j];
        }
        
        boolean ans;
        if (j >= p.length()) {
            ans = i >= s.length();
        } else {
            boolean firstMatch = (i < s.length() && 
                               (p.charAt(j) == s.charAt(i) || p.charAt(j) == '.'));
            
            if (j + 1 < p.length() && p.charAt(j + 1) == '*') {
                ans = dp(i, j + 2) || (firstMatch && dp(i + 1, j));
            } else {
                ans = firstMatch && dp(i + 1, j + 1);
            }
        }
        
        memo[i][j] = ans;
        return ans;
    }
}