class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(),wordlist.end());
        unordered_map<string,string> casemap;
        unordered_map<string,string> vowelmap;
        for(string w:wordlist){
            string lower=toLower(w);
            string devowel=deVowel(lower);
            if(!casemap.count(lower)) casemap[lower]=w;
            if(!vowelmap.count(devowel)) vowelmap[devowel]=w;
        }
        vector<string> res;
        for(string q:queries){
            if(exact.count(q)){
                res.push_back(q);
            }
            else{
                string lower=toLower(q);
                string devowel=deVowel(lower);
                if(casemap.count(lower)) res.push_back(casemap[lower]);
                else if(vowelmap.count(devowel)) res.push_back(vowelmap[devowel]);
                else res.push_back("");
            }
        }
        return res;
    }
    private:
    string toLower(string s){
        for(char &c:s) c=tolower(c);
        return s;
    }
    string deVowel(string s){
        for(char &c:s){
            if(isVowel(c)) c='*';
        }
        return s;
    }
    bool isVowel(char c){
        c=tolower(c);
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
};