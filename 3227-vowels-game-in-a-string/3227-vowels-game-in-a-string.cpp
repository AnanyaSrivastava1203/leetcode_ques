class Solution {
public:
    bool doesAliceWin(string s) {
        //if there is an odd number of vowels, then Alice will greedily take all at once
        //if there's and even number like aaaa, then a possibility of winning Alice is
        //Alice takes 1 a, then Bob takes 2 a, then again Alice takes 1 a
        //i.e, Alice takes odd number of vowels, then Bob takes even number of vowels then again Alice takes odd number of vowels
        //So, If there's a single vowel, Alice will win
        int flag=0;
        for(auto c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                flag=1;
                break;
            }
        }
        return (flag==1);
    }
};