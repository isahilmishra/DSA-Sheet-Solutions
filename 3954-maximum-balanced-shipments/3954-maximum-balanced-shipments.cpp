class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n=weight.size();
        int r=0,cnt=0;
        int maxi=-1;
        while(r<n){
            if(weight[r]>=maxi){
                maxi=weight[r];
                if(r+1<n && weight[r+1]<weight[r]){
                    cnt++;
                    maxi=-1;
                    r=r+2;
                    continue;
                }
            }
            r++;
        }
        return cnt;
    }
};