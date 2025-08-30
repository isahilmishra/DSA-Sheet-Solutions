/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isIdentical(Node* root1, Node* root2) {
        // code here
        if(!root1 || !root2) return root1==root2;
        
        return (root1->data==root2->data)&& isIdentical(root1->left,root2->left)
               && isIdentical(root1->right, root2->right);
    }
};