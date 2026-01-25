class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=k-1;
        int diff=0,min_diff=INT_MAX;
        while(j<n){
            // diff=nums[j]-nums[i];
            min_diff=min(min_diff,nums[j]-nums[i]);
            i++;
            j++;
        }
        return min_diff;
    }
};