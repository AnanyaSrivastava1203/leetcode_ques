class Solution {
public:

    vector<vector<int>> dirs={{-1,0},{1,0},{0,-1},{0,1}};
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m=grid.size();
        int n=grid[0].size();

        int starth=health-grid[0][0];
        if(starth<=0) return false;

        queue<tuple<int,int,int>> q;
        vector<vector<int>> best(m,vector<int>(n,-1));

        q.push({0,0,starth});
        best[0][0]=starth;

        while(!q.empty()){
            auto [r,c,h]=q.front();
            q.pop();

            if(r==m-1 && c==n-1 && h>0) return true;
            for(auto &d : dirs){
                int nr=r+d[0];
                int nc=c+d[1];
                
                if(nr>=0 && nr<m && nc>=0 && nc<n){
                    int nh=h-grid[nr][nc];

                    if(nh>0 && nh>best[nr][nc]){
                    q.push({nr,nc,nh});
                    best[nr][nc]=nh;
                    }
                }
            }
        }
        return false;
    }
};