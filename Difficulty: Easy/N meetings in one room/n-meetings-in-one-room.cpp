class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> p;
        for(int i=0; i<start.size(); i++){
            p.push_back({end[i],start[i]});
        }
        int freeTime=-1;
        int cnt=0;
        sort(p.begin(),p.end());
        for(int i=0; i<p.size();++i){
            if(p[i].second> freeTime){
                freeTime=p[i].first;
                cnt++;
            }
        }
        return cnt;
    }
};