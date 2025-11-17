class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev=-1,curr=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1 && prev==-1){
                prev=i;
            }
            else if(nums[i]==1){
                curr=i;
                if(curr-prev<=k) return false;
                prev=curr;
            }
        }
        return true;
    }
};