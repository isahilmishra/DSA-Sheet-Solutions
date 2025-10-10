/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

*/

class Solution {
  public:
    Node* insert(Node* root, int key) {
        //  code  here
        if(!root) return new Node(key);
        if(key<root->data){
            root->left=insert(root->left,key);
        }
        else if(key>root->data){
            root->right=insert(root->right,key);
        }
        
        return root;
    }
};