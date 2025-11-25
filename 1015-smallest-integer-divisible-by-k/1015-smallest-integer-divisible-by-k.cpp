class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0) return -1;
        long long int res=1,cnt=1;
        while(1){
            if(res%k==0) return cnt;
            res=res*10+1;
            cnt++;
            if(res>=INT_MAX) break;
        }
        return -1;
    }
};