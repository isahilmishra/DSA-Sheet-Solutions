class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
         vector<int> ans;

 

    for(int i = 0; i < asteroids.size(); i++){

        if(asteroids[i] == 0 && !ans.empty())continue;

        if(asteroids[i] >= 0){

            ans.push_back(asteroids[i]);

            continue;

        }

        while(!ans.empty() && ans.back() > 0 && abs(asteroids[i]) > ans.back()){

            ans.pop_back();

        }

 

        if(!ans.empty() && abs(asteroids[i]) == ans.back()){

            ans.pop_back();

        }else if((ans.empty() || ans.back() <= 0) && asteroids[i] < 0){

            ans.push_back(asteroids[i]);

        }

    }

    return ans;
    }
};