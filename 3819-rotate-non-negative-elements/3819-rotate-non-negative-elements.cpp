class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pos; //For positive values
        vector<int>idx; // For the indexes

        for(int i=0;i<n; i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
                idx.push_back(i);
            }
        }
        int m=pos.size();
        if(m==0) return nums;
        k%=m;

        rotate(pos.begin(),pos.begin()+k,pos.end());

        for(int i=0; i<m; i++){
            nums[idx[i]]=pos[i];
        }
        return nums;
    }
};