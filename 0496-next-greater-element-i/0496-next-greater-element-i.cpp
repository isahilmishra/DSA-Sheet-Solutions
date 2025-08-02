class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ngeMap;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty()&& st.top()<=nums2[i]) st.pop();
            int nge= st.empty() ? -1 : st.top(); 
             ngeMap[nums2[i]]=nge;
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int num: nums1){
            ans.push_back(ngeMap[num]);
        }
        return ans;
    }
};