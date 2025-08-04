class Solution {
public:
vector<int> findNSE(vector<int>& arr){
        int n= arr.size();
        vector<int> nse(n); stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            nse[i]=st.empty() ? n : st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSEE(vector<int>& arr){
        int n= arr.size();
        vector<int> psee(n); stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            psee[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }
        return psee;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse= findNSE(heights);
        vector<int> pse= findPSEE(heights);
        int maxi=0; 
        for(int i=0; i<heights.size(); i++){
            maxi=max(maxi, heights[i]*(nse[i]-pse[i]-1));
        }
        return maxi;
    }
};