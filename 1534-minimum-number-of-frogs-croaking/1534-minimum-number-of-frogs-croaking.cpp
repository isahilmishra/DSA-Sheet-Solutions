class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        vector<int> count(5,0);
        int maxFrogs=0;
        int active=0;

        for(char ch : croakOfFrogs){
            int ind;
            if(ch=='c') ind=0;
             else if(ch == 'r') ind = 1;
            else if(ch == 'o') ind = 2;
            else if(ch == 'a') ind = 3;
            else if(ch == 'k') ind = 4;
            else return -1; //Invalid character came

            if(ind>0 && count[ind-1]==0)
            return -1;

            if(ind>0) count[ind-1]--;
            count[ind]++;
           
            if(ch=='c') active++;
            if(ch=='k') active--;
            maxFrogs=max(maxFrogs,active);
        }

        for(int i=0; i<4; i++){
            if(count[i]!=0) return -1;
        }
        return maxFrogs;
    }
};