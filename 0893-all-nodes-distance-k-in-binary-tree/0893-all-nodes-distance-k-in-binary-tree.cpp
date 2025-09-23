/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void mark_parents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent_track,TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* current= q.front();
            q.pop();
            if(current->left){
                parent_track[current->left]=current;
                q.push(current->left);
            }
            if(current->right){
                parent_track[current->right]=current;
                q.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent_track;
        mark_parents(root,parent_track,target);
        
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int curr_level=0;
        while(!q.empty()){
            int size=q.size();
            if(curr_level++==k) break;
            for(int i=0; i<size; i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
               if(parent_track[curr] && !visited[parent_track[curr]]){
                 q.push(parent_track[curr]);
                 visited[parent_track[curr]]=true;
               }
            }
        }
        vector<int>result;
        while(!q.empty()){
            TreeNode* node=q.front(); q.pop();
            result.push_back(node->val);
        }
       return result;
    }
};