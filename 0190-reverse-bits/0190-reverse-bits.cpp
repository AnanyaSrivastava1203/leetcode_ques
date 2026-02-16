class Solution {
public:
    int reverseBits(int n) {
        int res=0;
        for(int i=1;i<=32;i++){
            res<<=1;//left shift the res so that whatever the digit is, gets shifted to left
            res=(res|(n&1));//n&1 gives the lsb of the number n.
            //res=res|(n&1) this bitwise OR appends the lsb of n to the lsb of res
            n>>=1;
        }
        return res;
    }
};