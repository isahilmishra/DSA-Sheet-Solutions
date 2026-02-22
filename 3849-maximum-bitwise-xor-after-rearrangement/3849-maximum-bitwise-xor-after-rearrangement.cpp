class Solution {
public:
    string maximumXor(string s, string t) {
        int n = s.size();
        int c_o = 0, c_z = 0;
        for(char c: t){
            if(c == '0'){
                c_z++;
            }
            else{
                c_o++;
            }
        }
        string temp = "";
        int i =0;
        while(c_z > 0 && c_o > 0){
            if(s[i] == '0'){
                temp += '1';
                c_o--;
            }
            else{
                temp += '0';
                c_z--;
            }
            i++;
        }
        while(c_o > 0){
            temp += '1';c_o--;
        }
        while(c_z > 0){
            temp += '0'; c_z--;
        }
        for(int i =0; i<n; i++){
            if(s[i] != temp[i]){
                temp[i] = '1';
            }
            else{
                temp[i] = '0';
            }
        }
        return temp;
    }
};