class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        int s=0;
        for(int x:nums){
            s+=x;
            if(abs((sum-s)-s)%2==0) count++;
        }
        return count!=0? count-1:0;
    }
};