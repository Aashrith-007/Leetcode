class Solution {
public:
    int cou(int n,vector<int> &dp){
        if (n==0) return 1;
        if (n<0) return 0;
        if (dp[n]!=-1) return dp[n];
        int l=cou(n-1,dp);
        int r=cou(n-2,dp);
        return dp[n]=l+r;

    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return cou(n,dp);
    }
};