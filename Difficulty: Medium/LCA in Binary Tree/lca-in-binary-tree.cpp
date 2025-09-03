/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node() {
        data = 0;
        left = right = NULL;
    }

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        //  code here
         if(root==NULL || root->data==n1||root->data==n2){
        return root;
       } 
        Node* left= lca(root->left,n1,n2);
        Node* right=lca(root->right,n1,n2);

       if(left==NULL) return right;
       else if(right==NULL) return left;
       else return root; //We have got the answer
    }
};