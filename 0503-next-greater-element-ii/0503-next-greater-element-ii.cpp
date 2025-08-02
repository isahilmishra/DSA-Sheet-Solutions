class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
    int n=a.size();
    vector<int> ans(n);
    stack<int> st;
    for(int i=2*n-1; i>=0; i--){
        while(!st.empty() && st.top()<=a[i%n]){ 
        st.pop();
        }
        if(i<n){
            ans[i]= st.empty() ? -1 : st.top();
        }
        st.push(a[i%n]);
    }
    return ans;
    }
};