// User function Template for C++

class Solution {

  public:
    vector<int> help_classmate(vector<int> arr, int n) {
        // Your code goes here
         vector<int> ans(n);
    stack<int>st;
    st.push(-1);
    for(int i=n-1; i>=0; i--){
        int curr=arr[i];
        while(st.top()>=curr) st.pop();

        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
    }
};