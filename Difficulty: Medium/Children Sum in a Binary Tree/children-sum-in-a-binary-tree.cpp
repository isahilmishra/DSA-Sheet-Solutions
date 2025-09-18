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
    int isSumProperty(Node *root) {
        // code here
       if(!root || (!root->left && !root->right)) return true;
       
       int leftVal=(root->left ? root->left->data : 0);
       int rightVal=(root->right? root->right->data : 0);
       
       if(root->data==leftVal+rightVal && isSumProperty(root->left) && isSumProperty(root->right)){
           return true;
       }
       return false;
    }
};