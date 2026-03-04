class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.length();
        string res="";
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                continue;
            }
            else{
                res=s.substr(0,i+1);
                break;
            }
        }
        return res;
    }
};