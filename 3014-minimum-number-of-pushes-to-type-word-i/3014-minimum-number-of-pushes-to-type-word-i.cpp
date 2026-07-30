class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        int l=word.size();
        if(l<=8){
            cnt=l;
        }
        else if(l<=16){
            cnt=8+(l-8)*2;
        }
        else if(l<=24){
            cnt=8+16+(l-16)*3;
        }
        else{
            cnt=8+16+24+(l-24)*4;
        }
        return cnt;
    }
};