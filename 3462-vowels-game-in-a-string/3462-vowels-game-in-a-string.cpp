class Solution {
public:
    bool isVowel(string s){
        for(char c: s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return false;
        }
        return true;
    }
    bool doesAliceWin(string s) {
        if(isVowel(s)) return false;
         else return true;
    }
};