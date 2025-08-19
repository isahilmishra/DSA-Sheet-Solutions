class Solution {
public:
    int helper(string &s, int i, int n, long num, int sign) {
        // base case: if out of bounds or non-digit
        if (i >= n || !isdigit(s[i])) return (int)(num * sign);

        num = num * 10 + (s[i] - '0');

        if (num * sign > INT_MAX) return INT_MAX;
        if (num * sign < INT_MIN) return INT_MIN;

        return helper(s, i + 1, n, num, sign);
    }
    int myAtoi(string s) {
        int i=0, n=s.size();
        //Skip the leading spaces;
        while(i<n && s[i]==' ') i++; 
        
        int sign=1;
        if(i<n && (s[i]=='+'||s[i]=='-')){
            sign= (s[i]=='-')? -1 : 1;
            i++;
        }
        return helper(s,i,n,0,sign);
    }
};