class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int largest_sum=0,smallest_sum=0;
        for(int i=0;i<k;i++){
            largest_sum+=nums[n-1-i];
            smallest_sum+=nums[i];
        }
        return abs(largest_sum-smallest_sum);
    }
};