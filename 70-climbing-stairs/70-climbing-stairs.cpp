class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        solve(dp,n);
        return dp[n];
    }
    
    int solve(vector<int>&dp,int n){
        if(n==0||n==1){
          dp[n]=1;
         return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=solve(dp,n-1)+solve(dp,n-2);
    }
    
};