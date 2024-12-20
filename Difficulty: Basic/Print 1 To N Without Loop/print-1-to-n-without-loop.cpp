//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public: 
    // Complete this function
    void printNos(int n) {
          vector<int>v;
        
        if(n==1)
        {
           v.push_back(1);
        }
        
      else{
          v.push_back(n);
          printNos(n-1);
      }
      
      
      for(auto it = v.begin(); it!=v.end();it++)
      {
          cout<<*(it)<<" ";
      }
    }
    
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends