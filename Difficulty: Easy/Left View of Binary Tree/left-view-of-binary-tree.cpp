/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> res;
        findLeft(root,0, res);
        return res;
    }
     void findLeft(Node* root, int level, vector<int> &res){
        if(!root) return;
        if(level==res.size()) res.push_back(root->data);

        findLeft(root->left, level+1, res);
        findLeft(root->right, level+1, res);
    }
};