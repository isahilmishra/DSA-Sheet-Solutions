class Solution {
public:
    void reverseString(vector<char>& s) {
       int size=s.size();
        int l=0,r=size-1;
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};