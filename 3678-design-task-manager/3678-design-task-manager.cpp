class TaskManager {
public:
    set<vector<int>>pq;
    map<int,vector<int>>mp;
    TaskManager(vector<vector<int>>& tasks) {
         for(int i=0;i<tasks.size();i++){
            pq.insert({tasks[i][2],tasks[i][1],tasks[i][0]});
            vector<int>v  ={tasks[i][0],tasks[i][2]};
            mp[tasks[i][1]] = v;
        }
    }
    
    void add(int userId, int taskId, int priority) {
        pq.insert({priority,taskId,userId,});
        vector<int>v  ={userId,priority};
        mp[taskId] = v;
    }
    
    void edit(int taskId, int np) {
        vector<int>v = mp[taskId];
        pq.erase({v[1],taskId,v[0]});
        pq.insert({np,taskId,v[0]});
        mp[taskId] = {v[0],np};
    }
    
    void rmv(int taskId) {
        vector<int>v = mp[taskId];
        pq.erase({v[1],taskId,v[0]});
        mp[taskId] = {};
    }
    
    int execTop() {
        if(pq.size()==0) return -1;
        vector<int>v = *pq.rbegin();
        pq.erase(v);
        return v[2];
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */