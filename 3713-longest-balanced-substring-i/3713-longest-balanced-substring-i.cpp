class Solution {
public:
    int longestBalanced(string s) {
        int maxlen=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int freq[26]={};
            int maxfreq=0,distinct=0;
            for(int j=i;j<n;j++){
                int idx=s[j]-'a';
                distinct+=(freq[idx]==0);
                maxfreq=max(maxfreq,++freq[idx]);

                if(j-i+1==distinct*maxfreq)
                maxlen=max(maxlen,j-i+1);
            }
        }
        return maxlen;
    }
};