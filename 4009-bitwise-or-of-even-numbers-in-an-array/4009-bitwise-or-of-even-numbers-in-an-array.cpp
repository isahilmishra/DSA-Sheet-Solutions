class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        bool flag=false;
        int res=0;
        for(int x : nums){
            if(x%2==0){
                res|=x;
                flag=true;
            }
        }
        if(!flag) return 0;
        else return res;
    }
};