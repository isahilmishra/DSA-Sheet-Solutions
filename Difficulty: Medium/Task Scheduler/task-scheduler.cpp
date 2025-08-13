class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
         int hash[26]={0};
        for(char c: tasks){
            hash[c-'A']++;
        }
       priority_queue<int> pq;
       for(int i=0; i<26; ++i){
         if(hash[i]>0) pq.push(hash[i]);
       }
       int time=0;
       while(!pq.empty()){
          vector<int> temp;
          int  cycle=K+1;
          while(cycle-- && !pq.empty()){
            int freq=pq.top();
            pq.pop();
            freq--;
            if(freq>0)
            temp.push_back(freq);
            time++;
          }
        for(int &f : temp){
             pq.push(f);
          }
          
          if(!pq.empty()) time+=cycle+1;
       }
       return time;
    }
};