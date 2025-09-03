class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        // split s into words
        while (ss >> word) {
            words.push_back(word);
        }

        // pattern and words must have same length
        if (words.size() != pattern.size()) return false;

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            // if mapping exists, check consistency
            if (charToWord.count(c) && charToWord[c] != w) return false;
            if (wordToChar.count(w) && wordToChar[w] != c) return false;

            // otherwise create mapping
            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};