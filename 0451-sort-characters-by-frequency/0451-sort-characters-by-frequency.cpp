class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
        }
        vector<pair<char, int>> vec(freq.begin(), freq.end());

    sort(vec.begin(), vec.end(), 
         [](auto &a, auto &b) { 
             return a.second > b.second;  // Descending order
         });
        
        string ans="";
        for(auto it :vec){
            ans.append(it.second, it.first);
        }
        return ans;
    }
};