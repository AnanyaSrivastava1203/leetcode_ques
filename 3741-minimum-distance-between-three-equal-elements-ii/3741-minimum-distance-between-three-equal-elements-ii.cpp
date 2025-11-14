class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int dist=INT_MAX;
        for(auto& [num,list]:mp){
            int x=list.size();
            if(x<3) continue;

            int id1=list[0],id2=list[1],id3=list[2];
            dist=min(dist,abs(id1-id2)+abs(id2-id3)+abs(id1-id3));
            for(int i=3;i<x;i++){
                id1=id2;
                id2=id3;
                id3=list[i];
                dist=min(dist,abs(id1-id2)+abs(id2-id3)+abs(id1-id3));
            }
        }
        return (dist!=INT_MAX)? dist:-1;
    }
};