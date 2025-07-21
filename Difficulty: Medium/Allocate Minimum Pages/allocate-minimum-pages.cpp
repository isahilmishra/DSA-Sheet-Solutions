class Solution {
  public:
  int noOfStudents(vector<int> & arr, int pages){
    int stu=1; int pagesOfBook=0;
    for(int i=0; i<arr.size();i++){
        if(arr[i]+pagesOfBook<=pages){
            pagesOfBook+=arr[i];
        }
        else {
            stu++;
            pagesOfBook=arr[i];
        }
    }
    return stu;
}
    int findPages(vector<int> &arr, int m) {
        // code here
        int n=arr.size();
        if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int cntStudents=noOfStudents(arr,mid);
        if(cntStudents>m) low=mid+1;
        else high=mid-1;
    }
    return low;
    }
};