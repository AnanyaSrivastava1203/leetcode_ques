class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        vector<int> last_lower(26,-1);
        vector<int> first_upper(26,-1);
        unordered_set<int> invalid;
        for(int i=0;i<n;i++){
            char ch=word[i];

            if(ch>='a' && ch<='z'){
                int idx=ch-'a';//position of ch in last_lower and first_upper
                last_lower[idx]=i;
                if(first_upper[idx]!=-1) invalid.insert(idx);
            }
            else{
                int idx=ch-'A';
                if(first_upper[idx]==-1) first_upper[idx]=i;
            }
        }
        int special_count=0;
        for(int i=0;i<26;i++){
            if(last_lower[i]!=-1 && first_upper[i]!=-1 && invalid.count(i)==0)
            special_count++;
        }
        return special_count;
    }
};