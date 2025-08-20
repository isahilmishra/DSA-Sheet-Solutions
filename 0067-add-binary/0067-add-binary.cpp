class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int sum=0;
         int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry) {
            sum = carry;
            if(i >= 0) sum += a[i--] - '0';  // take digit from a
            if(j >= 0) sum += b[j--] - '0';  // take digit from b

            res.push_back(char(sum % 2 + '0'));  // add bit
            carry = sum / 2;
        }

        reverse(res.begin(),res.end());
        return res;
    }
};