class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int p=0,n=0;
        for(auto x:operations){
            if(x=="X++"||x=="++X")
            p++;
            else
            n++;
        }
        return p > n ? abs(p-n) : -1 * abs(p-n);
    }
};