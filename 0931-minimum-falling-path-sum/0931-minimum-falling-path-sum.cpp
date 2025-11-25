class Solution {
public:
    int solve(vector<vector<int>>& mat,int i,int j,vector<vector<int>>& dp){
        if(j<0||j>=mat[0].size()) return INT_MAX;
        if(i==0) return dp[i][j]=mat[i][j];
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int up=mat[i][j]+solve(mat,i-1,j,dp);
        int ld=INT_MAX;
        if(i>=1 && j>=1) ld=mat[i][j]+solve(mat,i-1,j-1,dp);
        int rd=INT_MAX;
        if(i>=1 && j+1<mat[0].size()) rd=mat[i][j]+solve(mat,i-1,j+1,dp);
        return dp[i][j]=min(up,min(ld,rd));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        int mini=INT_MAX;
        for(int j=0;j<m;j++){
            mini=min(mini,solve(matrix,n-1,j,dp));
        }
        return mini;
    }
};