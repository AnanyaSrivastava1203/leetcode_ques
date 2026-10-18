class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        if(n==1) return 0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) count++;
        } 
        return count;
    }
};