/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
         vector<int>ans;
         queue<Node*>q;
         q.push(root1);
         while(!q.empty()){
             Node* cur=q.front();
             q.pop();
             ans.push_back(cur->data);
             if(cur->left) q.push(cur->left);
             if(cur->right)q.push(cur->right);
         }
         q.push(root2);
         while(!q.empty()){
             Node* cur=q.front();
             q.pop();
             ans.push_back(cur->data);
             if(cur->left) q.push(cur->left);
             if(cur->right)q.push(cur->right);
         }
         sort(ans.begin(),ans.end());
         return ans;
    }
};