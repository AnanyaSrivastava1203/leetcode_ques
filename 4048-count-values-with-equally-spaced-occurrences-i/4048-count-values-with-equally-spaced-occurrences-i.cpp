class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=0;
        for(auto &it:mp){
            if(it.second==3){
                int x=-1,y=-1,z=-1;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==it.first && x==-1) x=i;
                    else if(nums[i]==it.first && y==-1) y=i;
                    else if(nums[i]==it.first && z==-1) z=i;
                }
                if(y-x==z-y) ans++;
            }
        }
        return ans;
    }
};