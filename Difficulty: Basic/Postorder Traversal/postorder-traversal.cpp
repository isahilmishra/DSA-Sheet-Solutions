/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    void solvePostOrder(Node* root, vector<int> &res){
        if(root==NULL) return;
        
        solvePostOrder(root->left, res);
        solvePostOrder(root->right, res);
        res.push_back(root->data);
    }
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> ans;
        solvePostOrder(root, ans);
        return ans;
    }
};