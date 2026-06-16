class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum=0;
        int squaresum=0;
        for(int temp=n;temp!=0;temp/=10){
            int r=temp%10;
            digitsum+=r;
            squaresum+=(r*r);
        }
        return squaresum-digitsum>=50;
    }
};