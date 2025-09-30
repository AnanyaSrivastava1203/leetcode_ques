class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        int l=0,r=n-1;
        long long left_sum=0,right_sum=0;
        while(l<n-1 && nums[l]<nums[l+1]){//strictly increasing from left
            left_sum+=nums[l++];
        }
        while(r>0 && nums[r-1]>nums[r]){//strictly decreasing from right
            right_sum+=nums[r--];
        }
        if(l==r){
            long long option1=abs((left_sum+nums[l])-right_sum);
            long long option2=abs(left_sum-(right_sum+nums[l]));
            return min(option1,option2);
        }
        else if(r-l==1 && nums[l]==nums[r]){
            return abs(left_sum-right_sum);
        }
        else return -1;
    }
};