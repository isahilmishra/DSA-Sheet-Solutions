class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt=0;
         vector<bool> used(baskets.size(), false); 
        for(int i=0; i<fruits.size(); i++){
          for(int j=0; j<baskets.size(); j++){
            if(!used[j] && fruits[i]<=baskets[j]){
                used[j]=true;
                cnt++;
                break;
            }
          }
        }
        int result= fruits.size()-cnt;
        return result;
    }
};