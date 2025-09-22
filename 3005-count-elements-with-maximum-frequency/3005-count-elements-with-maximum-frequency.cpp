class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxf=0;
        for(int i:nums){
            mp[i]++;
            maxf=max(maxf,mp[i]);
        }
        int sum=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==maxf) sum+=it->second;
        }
        return sum;
    }
};