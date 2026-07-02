class Solution {
public:
    vector<vector<int>> dirs={{-1,0},{1,0},{0,-1},{0,1}};

    bool canReach(vector<vector<int>>& dist,int limit){
        int n=dist.size();

        //we have to choose a path such that all the path cells' distance is atleast equals 'limit', this is the condition of checking out if limit can contribute to a valid answer or not
        if(dist[0][0]<limit)//here we got a value that's smaller than limit, so in this particular path this small value will contribute as safeness factor, not the limit
        return false;

        //finding out the path where cells' value is atleast limit
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(n,vector<bool>(n,false));

        q.push({0,0});
        visited[0][0]=true;

        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();

            if(r==n-1 && c==n-1) return true;//the final cell is reached
            for(auto &d:dirs){
                int nr=r+d[0];
                int nc=c+d[1];

                if(nr>=0 && nr<n && nc>=0 && nc<n && !visited[nr][nc] && dist[nr][nc]>=limit){
                    visited[nr][nc]=true;
                    q.push({nr,nc});
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n=grid.size();

        queue<pair<int,int>> q;
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));

        //putting all theives into the queue
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        //making Multi-source BFS
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();

            for(auto &d:dirs){

                int nr=r+d[0];
                int nc=c+d[1];

                if(nr>=0 && nr<n &&
                 nc>=0 && nc<n &&
                 dist[nr][nc]==INT_MAX){

                    dist[nr][nc]=dist[r][c]+1;
                    q.push({nr,nc});
                }
            }
        }

        //now using Binary Search on answers to find the maximum of the minimum value
        int low=0;
        int high=2*n;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(canReach(dist,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

    }
};