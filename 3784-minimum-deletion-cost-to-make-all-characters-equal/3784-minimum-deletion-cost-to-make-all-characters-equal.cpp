class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long> sum(26,0);
        int n=s.length();
        long long total=0;
        for(int i=0;i<n;i++){
            sum[s[i]-'a']+=cost[i];
            total+=cost[i];
        }
        long long m=-1e8;
        for(int i=0;i<26;i++){
            m=max(m,sum[i]);
        }
        return total-m;
    }
};