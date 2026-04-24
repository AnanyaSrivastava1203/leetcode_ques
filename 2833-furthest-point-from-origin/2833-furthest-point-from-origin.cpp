class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0,right=0,dash=0;
        for(auto x:moves){
            if(x=='L') left++;
            else if(x=='R') right++;
            else dash++;
        }
        int dist=(left>=right)?-1:1;
        int ans=0;
        for(auto x:moves){
            if(x=='L') ans--;
            else if(x=='R') ans++;
            else ans+=dist;
        }
        return abs(ans);
    }
};