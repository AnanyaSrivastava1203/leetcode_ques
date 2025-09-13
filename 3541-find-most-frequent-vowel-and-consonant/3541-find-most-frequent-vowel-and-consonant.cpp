class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> vowels;
        map<char,int> consonants;
        for(auto c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vowels[c]++;
            }
            else{
                consonants[c]++;
            }
        }
        int mv=0;
        for(auto it:vowels){
            mv=max(mv,it.second);
        }
        int mc=0;
        for(auto it:consonants){
            mc=max(mc,it.second);
        }
        return mv+mc;
    }
};