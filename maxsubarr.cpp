class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
        int best=arr[0],sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=max(arr[i],sum+arr[i]);
            best=max(best,sum);
        }
        return  best;
    }
};