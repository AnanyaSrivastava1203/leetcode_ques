class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long g=gcd(nums[i],nums[j]);
                long long strength=(1LL*nums[i]*nums[j])/(1LL*g*g);
                ans=max(ans,strength);
            }
        }
        return ans;
    }
};