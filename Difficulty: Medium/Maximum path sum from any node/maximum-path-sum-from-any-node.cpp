// User Fuction template for C++
/*
// Tree Node
class Node {
public:
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
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) {
        // code here
        int maxi=INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
     int maxPathDown( Node* node, int & maxi){
        if(!node) return 0;

        int left= max(0, maxPathDown(node->left,maxi));
        int right=max(0,maxPathDown(node->right, maxi));

        maxi= max(maxi, node->data+right+left);

        return node->data + max(left, right);
    }
};