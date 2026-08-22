class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum=0,digitproduct=1;
        for(int temp=n;temp!=0;temp/=10){
            digitsum+=(temp%10);
            digitproduct*=(temp%10);
        }
        return (n%(digitsum+digitproduct)==0);
    }
};