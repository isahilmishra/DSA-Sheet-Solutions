/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void getPaths(Node* root, vector<int>&ds, vector<vector<int>> &ans){
        if(!root){
            return;
        }
        
        ds.push_back(root->data);
        
        if(!root->left && !root->right){
            ans.push_back(ds);
        }
        else{
              getPaths(root->left,ds,ans);
              getPaths(root->right,ds,ans);
        }
        //delete the added elements while backracking
        
        ds.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int>ds;
        getPaths(root,ds,ans);
        return ans;
    }
};