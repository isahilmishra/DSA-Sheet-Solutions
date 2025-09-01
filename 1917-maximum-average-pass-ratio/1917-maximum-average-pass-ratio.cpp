class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<pair<double,int>>pq;

        for(int i=0; i<n; i++){
            int N=classes[i][0]; int D=classes[i][1];
            pq.push({(double)(N+1)/(D+1)-(double)N/D, i});
        }
        while(extraStudents--){
            pair<double,int> p = pq.top();
            pq.pop();

            int i=p.second;
            classes[i][0]++; classes[i][1]++;
            int N=classes[i][0]; int D=classes[i][1];
            pq.push({(double)(N+1)/(D+1)-(double)N/D, i});
        }
         double sum=0;
         for(int i=0; i<n; i++){
            sum+=((double)classes[i][0]/classes[i][1]);
         }
         return sum/n;
    }
};