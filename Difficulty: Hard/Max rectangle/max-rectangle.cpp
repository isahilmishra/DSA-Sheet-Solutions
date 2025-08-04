class Solution {
  public:
    int maxArea(vector<vector<int>> &matrix) {
        // code here
         if (matrix.empty() || matrix[0].empty()) return 0;

        int cols = matrix[0].size();
        vector<int> heights(cols, 0);
        int maxArea = 0;

        for (auto& row : matrix) {
            for (int i = 0; i < cols; ++i)
                heights[i] = (row[i] == 1) ? heights[i] + 1 : 0;
            maxArea = max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
    int largestRectangleArea(vector<int>& heights) {
      stack<int> st; int maxArea=0;
      for(int i=0; i<heights.size(); i++){
        while(!st.empty()&& heights[st.top()]>heights[i]){
            int element=st.top();
            st.pop();
            int nse=i; int pse= st.empty()? -1 : st.top();
            maxArea= max( maxArea, (nse-pse-1)*heights[element]);
        }
        st.push(i);
      }
      while(!st.empty()){
       int nse=heights.size();
       int element=st.top(); st.pop();
       int pse= st.empty()? -1 : st.top();
         maxArea= max( maxArea, (nse-pse-1)*heights[element]);
      }
      return maxArea;
    }
};