class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int l=0,r=0;
        deque<int>temp;
        while(r<nums.size()){
            temp.push_back(nums[r]);
            
            if(temp.size()>k){
                temp.pop_front();
                l++;
            }
            if(temp.size()==k){
                bool flag=true;
                for(int i=0; i<k-1; i++){
                    if(temp[i]+1!=temp[i+1]){
                        flag=false;
                        break;
                    }
                }
                if(flag)ans.push_back(temp.back());
                else ans.push_back(-1);
            }
            r++;
        }
        return ans;
    }
};