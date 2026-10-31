class Solution {
public:
    int countset(int n){
        int count=0;
        while(n>0){
            n&=(n-1);
            count++;
        }
        return count;
    }
    int calculateScore(int a, int b) {
        int s1=countset(a);
        int s2=countset(b);
        if(s1>=s2) return s1*s2;
        return s2/s1;
    }
};