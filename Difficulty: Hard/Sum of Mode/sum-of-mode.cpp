class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> freq;
        map<int,set<int>> bucket;  // freq -> sorted set of numbers
        int n = arr.size();
        int l = 0, sum = 0;

        auto add = [&](int x){
            int oldFreq = freq[x];
            int newFreq = ++freq[x];
            if(oldFreq > 0){
                bucket[oldFreq].erase(x);
                if(bucket[oldFreq].empty()) bucket.erase(oldFreq);
            }
            bucket[newFreq].insert(x);
        };

        auto remove = [&](int x){
            int oldFreq = freq[x];
            int newFreq = --freq[x];
            bucket[oldFreq].erase(x);
            if(bucket[oldFreq].empty()) bucket.erase(oldFreq);
            if(newFreq > 0){
                bucket[newFreq].insert(x);
            } else {
                freq.erase(x);
            }
        };

        for(int r = 0; r < n; r++){
            add(arr[r]);

            if(r - l + 1 > k){
                remove(arr[l]);
                l++;
            }

            if(r - l + 1 == k){
                // mode = smallest element among max frequency
                auto it = bucket.rbegin(); // highest frequency bucket
                int modeVal = *it->second.begin();
                sum += modeVal;
            }
        }
        return sum;
        
    }
};