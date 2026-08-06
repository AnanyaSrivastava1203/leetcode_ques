class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        double standard=(1.0*a)/b;
        double trial;
        int ans=0;
        for(int i=0;i<n;i++){
            int x=0,y=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0) x++;
                else y++;
                if(y>0){
                    trial=(1.0*x)/y;
                    if(trial<=standard) ans++;
                }

            }
        }
        return ans;
    }
};