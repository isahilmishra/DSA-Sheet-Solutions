class Solution {
  public:
    int getSecondLargest(vector<int> &a) {
        // code here
         int largest= a[0];
     int slargest= -1;
     for(int i=1; i<a.size(); i++){
         if(a[i]>largest){
             slargest = largest;
             largest = a[i];
         }
         else if (a[i]< largest && a[i]> slargest){
              slargest= a[i];
         }
     }
     return slargest;
    }
};