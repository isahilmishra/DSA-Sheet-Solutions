/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // Code here
        vector<int> res;
        if(!root) return res;
        
        queue<Node*> q;
        q.push(root);
        bool flag=true;
        
        while(!q.empty()){
            int size= q.size();
            vector<int> row(size);
            
            for(int i=0; i<size; i++){
                Node* curr= q.front();
                q.pop();
                
                int ind= (flag)? i : size-1-i;
                row[ind] = curr->data;
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            
            for(int val: row) res.push_back(val);
            flag=!flag;
            
        }
        return res;
    }
};