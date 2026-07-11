class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sumofBeauty=0;
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxi=INT_MIN,mini=INT_MAX;
                for(int ch=0;ch<26;ch++){
                    if(freq[ch]>0){
                        maxi=max(maxi,freq[ch]);
                        mini=min(mini,freq[ch]);
                    }
                }
                sumofBeauty+=(maxi-mini);
            }
        }
        return sumofBeauty;
    }
};