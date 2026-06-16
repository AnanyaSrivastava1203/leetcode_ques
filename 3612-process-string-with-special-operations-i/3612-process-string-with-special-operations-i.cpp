class Solution {
public:
    string processStr(string s) {
      string result = "";

        for (char ch : s) {
        if (islower(ch)) {
            result += ch;  // Append lowercase letter
        } else if (ch == '*') {
            if (!result.empty()) {
                result.pop_back();  // Remove last character
            }
        } else if (ch == '#') {
            result += result;  // Duplicate the string
        } else if (ch == '%') {
            reverse(result.begin(), result.end());  // Reverse the string
        }
    }

    return result;   
    }
};