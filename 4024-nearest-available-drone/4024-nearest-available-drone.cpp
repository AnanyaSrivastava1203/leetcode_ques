class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n=drones.size();
        int idx=-1;
        int d=INT_MAX;
        for(int i=0;i<n;i++){
            int x=drones[i][0];
            int y=drones[i][1];
            int r=drones[i][2];
            if(abs(x-target[0])+abs(y-target[1])<=r) {
                if(abs(x-target[0])+abs(y-target[1])<d){
                    d=abs(x-target[0])+abs(y-target[1]);
                    idx=i;
                }
            }
        }
        return idx;
    }
};