/*
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
bool search(Node* root, int val) {
    // Your code here
      while(root!=NULL && root->data!=val){
            root=val>root->data? root->right : root->left;
        }
        return root;
}