class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& nums, int d) {
        // code here
        int n=nums.size();
        d=d%n;
    vector<int>temp;
    
    for(int i=0;i<d; i++){
        temp.push_back(nums[i]);
    }
    for(int i=d; i<n; i++){
        nums[i-d]=nums[i];
    }
    for(int i=n-d; i<n; i++){
        nums[i]=temp[i-(n-d)];
    }
    }
};