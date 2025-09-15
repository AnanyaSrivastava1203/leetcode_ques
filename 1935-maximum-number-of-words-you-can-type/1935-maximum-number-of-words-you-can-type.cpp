class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // Create a set of broken letters for O(1) lookup
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        
        int totalWords = 0; // Count of words that can be typed
        string word = "";
        bool canType = true;
        
        // Append a space to handle the last word uniformly
        text += ' ';
        
        for (char c : text) {
            if (c == ' ') {
                // End of a word
                if (canType) {
                    totalWords++;
                }
                // Reset for the next word
                word = "";
                canType = true;
            } else {
                word += c;
                // Check if current character is broken
                if (canType && broken.find(c) != broken.end()) {
                    canType = false; // Mark word as untypable
                }
            }
        }
        
        return totalWords;
    }
};