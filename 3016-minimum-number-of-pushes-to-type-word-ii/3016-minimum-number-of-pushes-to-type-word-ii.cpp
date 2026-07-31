class Solution {
public:
    int minimumPushes(string word) {
        int mincount=0;
        vector<int> freq(26,0);
        for(auto x:word){
            freq[x-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        for(int i=0;i<26;i++){
            mincount+=(freq[i]*(i/8+1));
        }
        return mincount;
    }
};