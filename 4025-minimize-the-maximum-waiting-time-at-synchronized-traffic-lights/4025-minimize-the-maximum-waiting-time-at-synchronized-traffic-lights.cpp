class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int m=*max_element(lights.begin(),lights.end());
        int ans=0;
        for(auto x:arrivalTime){
            int r=x%period;
            if(r<m) continue;
            ans=max(ans,period-r);
        }
        return ans;
    }
};