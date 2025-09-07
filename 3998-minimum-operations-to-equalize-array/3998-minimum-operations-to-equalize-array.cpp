class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int>st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size()==1) return 0;
        else return 1;
    }
};