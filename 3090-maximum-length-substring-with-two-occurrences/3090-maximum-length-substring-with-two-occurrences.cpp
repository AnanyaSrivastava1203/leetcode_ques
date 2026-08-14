class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxlen=0;
        int i=0,j=0;
        int n=s.length();
        vector<int> letters(26,0);
        while(i<n && j<n){
            letters[s[j]-'a']++;
            while(letters[s[j]-'a']>2){
                letters[s[i]-'a']--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};