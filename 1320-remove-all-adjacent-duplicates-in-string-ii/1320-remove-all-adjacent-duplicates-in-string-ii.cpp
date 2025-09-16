class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
       
       for(char c:s){
         if(!st.empty() &&st.top().first==c){
            st.top().second++;
            if(st.top().second==k){
                st.pop();
            }
         }
         else{
            st.push({c,1});
         }
       }
       string ans="";
       while(!st.empty()){
         auto[ch,cnt]=st.top();
         st.pop();
         ans.append(cnt,ch);
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};