class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.length();
        int i=n-1;
        while(i>=0 && (s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'))
        i--;
        return s.substr(0,i+1);
    }
};