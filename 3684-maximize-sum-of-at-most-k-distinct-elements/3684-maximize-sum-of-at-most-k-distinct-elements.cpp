class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int> res;
        for(auto n:nums){
            if(res.empty()) res.push_back(n);
            else{
                int top=res.back();
                if(n==top) continue;
                res.push_back(n);
            }
            if(res.size()==k) break;
        }
        return res;
    }
};