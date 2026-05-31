class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n=asteroids.size();
        long long currMass=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0; i<n; i++){
            if(asteroids[i]<=currMass) currMass+=asteroids[i]*1LL;
            else return false;
        }
        return true;
    }
};