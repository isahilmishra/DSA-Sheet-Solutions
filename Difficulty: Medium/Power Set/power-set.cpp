class Solution {
  public:
    vector<string> AllPossibleStrings(string str) {
        // Code here
        int n=str.size();
	 int subset=(1<<n); // total Subsets = 2^n;
	 vector<string>ans;
	 for(int num=1; num<subset; num++){
		 string subs="";
		 for(int i=0; i<n ;i++){
			 if(num & (1<<i) ){
				 subs+=str[i];
			 }
		 }
		 ans.push_back(subs);
	 }
	  sort(ans.begin(),ans.end());
	return ans;
    }
};