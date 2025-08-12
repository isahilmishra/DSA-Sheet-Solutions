class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int cnt=0; int res=0;
        int needLucky= (n+1)/2;
        vector<int> costs;
        
        for(int i=0; i<n; i++){
            if(arr[i]%k==0) cnt++;
            else{
                costs.push_back(k-(arr[i]%k)); //Soilders to add;
            }
        }
        
        if(cnt>=needLucky) return 0;
        
        sort(costs.begin(), costs.end());
        
        for(int i=0; i<needLucky-cnt; ++i){
            res+=costs[i];
        }
       return res;
    }
};