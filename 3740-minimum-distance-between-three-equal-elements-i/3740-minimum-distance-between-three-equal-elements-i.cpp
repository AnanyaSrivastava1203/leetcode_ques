class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dist=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i+1;j<n;j++){
                if(nums[j]==nums[i] && count==0) count++;
                else if(nums[j]==nums[i] && count==1){
                    dist=min(dist,j-i);
                }
            }
        }
        return (dist!=INT_MAX) ? 2*dist : -1;
    }
};