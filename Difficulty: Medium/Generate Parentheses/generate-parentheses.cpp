// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
     void generate(vector<string>&ans,string form,int n ,int opening,int closing){
       if(form.length()==n*2){
           ans.push_back(form);
           return;
       }
       if(opening<n){
           generate(ans,form+"(",n,opening+1,closing);
       }
       if(closing<opening){
           generate(ans,form+")",n,opening,closing+1);
       }
   }
    vector<string> generateParentheses(int n) {
        // code here
         vector<string>ans;
        string form="";
        generate(ans,form,n/2,0,0);
        return ans;
    }
};