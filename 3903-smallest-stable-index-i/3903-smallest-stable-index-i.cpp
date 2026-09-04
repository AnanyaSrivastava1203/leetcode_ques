class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        for(int i=0;i<n;i++){
            if(i==0){
                left[i]=nums[i];
                continue;
            }
            left[i]=max(nums[i],left[i-1]);
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                right[i]=nums[i];
                continue;
            }
            right[i]=min(nums[i],right[i+1]);
        }
        for(int i=0;i<n;i++){
            int score=left[i]-right[i];
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};