class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int inc=1,prev=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) inc++;
            else{
                prev=inc;
                inc=1;
            }
            if(inc==2*k || inc>=k && prev>=k) return true;
        }
        return false;
    }
};