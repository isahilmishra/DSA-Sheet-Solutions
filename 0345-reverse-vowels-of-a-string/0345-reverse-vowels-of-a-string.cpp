class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        else if(c=='A'||c=='I'||c=='E'||c=='O'||c=='U') return true;
        else return false;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<=r){
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(!isVowel(s[l])) l++;
            else if(!isVowel(s[r])) r--;
        }
        return s;
    }
};