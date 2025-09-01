/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
          if(!root) return {};

        // map: hd -> list of nodes
        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            Node* node = p.first;
            int hd = p.second;
            
            mp[hd].push_back(node->data); // just push in BFS order
            
            if(node->left) q.push({node->left, hd-1});
            if(node->right) q.push({node->right, hd+1});
        }
        
        vector<vector<int>> ans;
        for(auto &it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};