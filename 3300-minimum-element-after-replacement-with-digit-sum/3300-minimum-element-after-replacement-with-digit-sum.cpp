class Solution {
public:
    int sum_of_digits(int num){
        int sum=0;
        for(int temp=num;temp!=0;temp/=10){
            sum+=(temp%10);
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=sum_of_digits(nums[i]);
        }
        return *min_element(nums.begin(),nums.end());
    }
};