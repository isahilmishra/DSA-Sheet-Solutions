class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
       vector<int> ans;
       for(int i=1; i<=n;i++){
        bool ok=true;
         if(i%10!=0){
            int a=i;
            while(a>0){
                if(a%10==0){
                    ok=false;
                    break;
                }
                a/=10;
            }
            int b=n-i;
            while(b>0){
                if(b%10==0){
                ok=false;
                break;
                }
                b=b/10;
            }
            if(ok){
                ans.push_back(i);
                ans.push_back(n-i);
                break;
            }
         }
       }
       return ans;
    }
};