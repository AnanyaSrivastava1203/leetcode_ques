class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxsum=0,sum=0;
        for(int i=0;i<n/2;i++){
            sum=(nums[i]+nums[n-i-1]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};