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
    bool isLeaf(Node* root){
        return (root!=NULL && root->left==NULL && root->right==NULL);
    }
    
    void addLeftBoundary(Node* root, vector<int>&res){
        Node* cur=root->left;
        while(cur){
            if(!isLeaf(cur)) res.push_back(cur->data);
            if(cur->left) cur=cur->left;
            else cur=cur->right;
        }
    }
    
    void addLeaves(Node* root, vector<int> &res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left) addLeaves(root->left, res);
        if(root->right) addLeaves(root->right, res);
    }
    
    void addRightBoundary(Node* root, vector<int> &res){
        Node* cur=root->right;
        vector<int> tmp;
        while(cur){
        if(!isLeaf(cur)) tmp.push_back(cur->data);
        
        if(cur->right) cur=cur->right;
        else cur=cur->left;
    }
    
     for(int i=tmp.size()-1; i>=0; i--){
         res.push_back(tmp[i]);
     }
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root,res);
        return res;
    }
};