class Solution {
public:
bool possible(const vector<int> arr, int day, int m , int k){
	 long long cnt=0;
	 long long noOfB=0;
	 for(int i=0; i<arr.size(); i++){
		 if(arr[i]<=day) cnt++;
		 else{
			 noOfB+=(cnt)/k;
			 cnt=0;
		 }
	 }
	 noOfB+=(cnt)/k;
	 if(noOfB>=m) return true;
	 else return false;

 }
    int minDays(vector<int>& arr, int m, int k) {
     int n= arr.size();
     long long required = (long long) m*k;
     if(required>n) return -1;

	int low= *min_element(arr.begin(),arr.end());
	int high= *max_element(arr.begin(),arr.end());
	int ans=high;
	
	while(low<=high){
		int mid=(low+high)/2;
		if(possible(arr,mid,m,k)==1){
			ans=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
	return low;
    }
};