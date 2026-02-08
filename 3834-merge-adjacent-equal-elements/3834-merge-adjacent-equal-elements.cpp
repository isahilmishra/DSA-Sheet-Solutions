class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        int n=nums.size();
        stack<long long>st;
        
         for (int x : nums) {
            long long cur = x;

            // keep merging while possible
            while (!st.empty() && st.top() == cur) {
                st.pop();
                cur *= 2;
            }

            st.push(cur);
        }

        vector<long long>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};