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
    Node *deleteNode(Node *root, int key) {
        // code here
        if(!root) return NULL;
        if(root->data==key) return helper(root);
        Node* dummy=root;
        while(root!=NULL){
            if(root->data>key){
                if(root->left!=NULL && root->left->data==key){
                    root->left=helper(root->left);
                    break;
                }
                else root=root->left;
            }
            else{
                if(root->right!=NULL && root->right->data==key){
                    root->right=helper(root->right);
                    break;
                }
                else root=root->right;
            }
        }
       return dummy;
    }
      Node* helper(Node* root){
        if(!root->left) return root->right;
        else if(!root->right) return root->left;

        Node* rightChild=root->right;
        Node* lastRight=findLastRight(root->left);
        lastRight->right =rightChild;

        return root->left;
    }
     Node* findLastRight(Node* root){
        if(!root->right){
             return root;
        }
        return findLastRight(root->right);
    }
};