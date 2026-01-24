class Solution {
public:
    int vowelConsonantScore(string s) {
       int v=0,c=0;
       for(char x:s){
         if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++;
         else if(isdigit(x)) continue;
         else if(x==' ') continue;
         else c++;
       } 
       return c==0? 0 : floor(v/c);
    }
};