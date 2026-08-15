class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int tot=0;
        bool nonzero=false;
        for(auto x:nums){
            tot^=x;
            if(x!=0) nonzero=true;
        }
        if(tot!=0) return nums.size();
        if(nonzero) return nums.size()-1;
        return 0;
    }
};