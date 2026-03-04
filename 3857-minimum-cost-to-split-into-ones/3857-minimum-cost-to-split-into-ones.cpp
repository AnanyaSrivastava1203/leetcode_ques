class Solution {
public:
    int minCost(int n) {
        //n=(n-1)+1=>cost=n-1
        //n-1=(n-2)+1=>cost=n-2
        //n-2=(n-3)+1=>n-3
        //...
        //3=2+1=>cost=2
        //2=1+1=>cost=1
        //total cost=1+2+3+..+n-1=(n-1)(n)/2
        return (n>1)?(n-1)+minCost(n-1):0;
    }
};