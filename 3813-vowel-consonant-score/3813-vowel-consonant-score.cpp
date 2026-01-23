class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(auto i:s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u') v++;
            else if(i>'a' && i<='z') c++;
        }
        return (c>0)? floor(v/c):0;
    }
};