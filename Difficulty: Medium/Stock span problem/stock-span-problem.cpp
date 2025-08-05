class Solution {
  public:
    vector<int> calculateSpan(vector<int>& prices) {
        // code here
         int n= prices.size();
    vector<int> span(n,1);
    stack<int> st;
    for(int i=0; i<n; i++){
        int val= span[i];
        while(!st.empty() && prices[i]>=prices[st.top()]){
            int t=st.top();
            st.pop();
            val+=span[t];
        }
        span[i]=val;
        st.push(i);
    }
    return span;
    }
};