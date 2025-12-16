class Solution {
public:
    int vowelcount(string a){//counting the vowels
        int count=0;
        for(char c:a){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;
        }
        return count;
    }

    string reverseWords(string s) {
    int n = s.length();
    vector<string> st;
    string str = "";

    // Split words
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            if (!str.empty()) {
                st.push_back(str);
                str = "";
            }
        } else {
            str += s[i];
        }
    }
    if (!str.empty())
        st.push_back(str);

    if (st.empty()) return "";

    int set = vowelcount(st[0]); // vowel count of first word

    // Rebuild the string
    string result = st[0];
    for (int i = 1; i < st.size(); i++) {
        result += " ";
        if (vowelcount(st[i]) == set) {
            reverse(st[i].begin(), st[i].end());
        }
        result += st[i];
    }

    return result;
    }
};