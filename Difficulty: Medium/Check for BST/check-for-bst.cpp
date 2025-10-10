/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool helper(Node* root, long long low, long long high){
        if(!root) return true;
        int c=root->data;
        if(c<=low || c>=high) return false;
        
        return helper(root->left,low,c) && helper(root->right, c, high);
    }
    bool isBST(Node* root) {
        // code here
        return helper(root, LLONG_MIN,LLONG_MAX);
    }
};