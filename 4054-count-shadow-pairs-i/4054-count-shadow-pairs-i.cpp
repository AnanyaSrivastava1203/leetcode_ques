class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        long long ans=0;
        vector<int> s;
        for(int a:nums){
            while(!s.empty() && s.back()>a)
            s.pop_back();
            ans+=lower_bound(s.begin(),s.end(),a)-s.begin();
            s.push_back(a);
        }
        return ans;
    }
};