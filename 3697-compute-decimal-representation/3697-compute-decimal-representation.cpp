class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long p=1;
        for(long long temp=n;temp!=0;temp/=10){
            int r=temp%10;
            if(r!=0)
            ans.push_back((int)(1LL*r*p));
            p*=10;
        }
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
};