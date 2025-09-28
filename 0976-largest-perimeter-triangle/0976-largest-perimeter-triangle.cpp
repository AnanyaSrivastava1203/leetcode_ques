class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        // for(int i=0;i<nums.size()-2;i++){
        //     if(nums[i+1]+nums[i+2]>nums[i])
        //     return nums[i]+nums[i+1]+nums[i+2];
        // }
        // return 0;
        int x=0,y=1,z=2;
        while(z<nums.size()){
            if(nums[y]+nums[z]>nums[x]){
                return nums[x]+nums[y]+nums[z];
            }
            x++;
            y++;
            z++;
        }
        return 0;
    }
};