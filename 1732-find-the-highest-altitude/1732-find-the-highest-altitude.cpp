class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,n=gain.size(),h=0;
        for(int i=0;i<n;i++){
            h+=gain[i];
            maxi=max(maxi,h);
        }
        return maxi;
    }
};