/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        //In log(n) TC
        if(!root) return 0;
        int lh= findLeftH(root);
        int rh=findRightH(root);

        if(lh==rh) return (1<<lh)-1;
        return 1+ countNodes(root->left) + countNodes(root->right);
    }
    int findLeftH(TreeNode* node){
       int h=0;
       while(node){
        h++;
        node=node->left;
       }
       return h;
    }
    int findRightH(TreeNode* node){
        int h=0;
        while(node){
            h++;
            node=node->right;
        }
        return h;
    }
};