class Solution {
public:
    // int f(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp){
    //     if(i==triangle.size()-1) return triangle[i][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int d=triangle[i][j]+f(i+1,j,triangle,dp);
    //     int dg=triangle[i][j]+f(i+1,j+1,triangle,dp);
    //     return dp[i][j]=min(d,dg);
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(i==0&&j==0) dp[i][j]=triangle[i][j];
                else{
                    int d=(j<i)?dp[i-1][j]:INT_MAX;
                    int dg=(j>0)?dp[i-1][j-1]:INT_MAX;
                    dp[i][j]=triangle[i][j]+min(d,dg);
                }
            }
        }
        int m=*min_element(dp[n-1].begin(),dp[n-1].end());
        return m;
    }
};