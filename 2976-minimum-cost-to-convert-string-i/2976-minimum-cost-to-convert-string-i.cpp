class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        const long long INF=1e18;
        int N=26;
        //dist[i][j] is the min cost to convert char i -> char j
        vector<vector<long long>> dist(N,vector<long long>(N,INF));

        //cost is 0 to convert a char to itself
        for(int i=0;i<N;i++) dist[i][i]=0;

        //making the graph
        for(int i=0;i<original.size();i++){
            int u=original[i]-'a';
            int v=changed[i]-'a';
            dist[u][v]=min(dist[u][v],(long long)cost[i]);
        }

        for(int k=0;k<N;k++){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    if(dist[i][k]<INF && dist[k][j]<INF){
                        dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                    }
                }
            }
        }
        long long ans=0;
        for(int i=0;i<source.size();i++){
            int s=source[i]-'a';
            int t=target[i]-'a';
            if(dist[s][t]==INF) return -1;
            ans+=dist[s][t];
        }
        return ans;
    }
};