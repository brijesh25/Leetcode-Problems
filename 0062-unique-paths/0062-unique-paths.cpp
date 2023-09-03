class Solution {
public:
    int dp[101][101]={0} ;
    int sol(int i,int j,int m,int n)
    {
        if(i==m+1 || j==n+1) return 0;
        else if(i==m && j==n) return 1;
        if(dp[i][j]>0) return dp[i][j];
        return dp[i][j] = sol(i+1,j,m,n)+sol(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        return sol(1,1,m,n);
    } 
};