class Solution {
public:
    int minOperations(string s1, string s2) {
        int n=s1.length();
        if(n==1){
            if(s1[0]==s2[0]) return 0;
            if(s1[0]=='0' && s2[0]=='1') return 1;
            return -1;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]) continue;
            else{
                if(s1[i]=='0' && s2[i]=='1'){
                    ans++;
                    s1[i]='1';
                }
                else if(s1[i]=='1' && s2[i]=='0'){
                    if(i+1<n && s1[i+1]=='1'){
                        s1[i]='0';
                        s1[i+1]='0';
                        ans++;
                    }
                    else if(i+1<n && s1[i]=='1' && s1[i+1]=='0'){
                        s1[i]='0';
                        s1[i+1]='0';
                        ans+=2;
                    }
                    else if(i-1>=0){
                        ans+=2;
                        s1[i]='0';
                    }
                }
            }
        }
        return s1==s2 ? ans:-1;
    }
};