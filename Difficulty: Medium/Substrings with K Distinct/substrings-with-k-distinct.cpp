class Solution {
  public:
  int atMost(string str, int k){
     unordered_map<char, int> mp;
    int l=0,r=0,cnt=0;
    while(r<str.size()){
        mp[str[r]]++;

        while(mp.size()>k){
            mp[str[l]]--;
            if(mp[str[l]]==0) 
            mp.erase(str[l]);
            l++;
        }
        if(mp.size()<=k) cnt+=r-l+1;
        r++;
    }
    return cnt;
}
    int countSubstr(string& str, int k) {
        // code here.
        return atMost(str, k) - atMost(str, k-1);
    }
};