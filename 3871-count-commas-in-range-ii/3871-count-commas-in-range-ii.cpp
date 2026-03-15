class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        for(int i=4;i<=18;i++){
            long long commas=(i-1)/3;

            long long left=pow(10,i-1);
            long long right=pow(10,i)-1;
            
            if(left>n){
                break;
            }
            long long numbers=min(right,n)-left+1;
            ans+=(commas*numbers);
        }
        return ans;
    }
};