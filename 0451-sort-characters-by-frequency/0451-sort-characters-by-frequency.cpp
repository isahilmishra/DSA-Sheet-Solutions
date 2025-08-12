class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        priority_queue<pair<int,char>>heap;
        for(auto ch:s) mpp[ch]++;
        for(auto [ch,freq]:mpp){
            heap.push({freq,ch});
        }
        string result;
        while(!heap.empty()){
            for(int i=0;i<heap.top().first;i++) result+=heap.top().second;
            heap.pop();
        }
        return result;
    }
};