/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre=NULL;
        Node* suc=NULL;
        Node* cur=root;
        
        while(cur){
            if(cur->data==key){
                if(cur->left){
                   Node* temp=cur->left;
                   while(temp->right) temp=temp->right;
                   pre=temp;
                }
                if(cur->right){
                    Node* temp=cur->right;
                    while(temp->left) temp=temp->left;
                    suc=temp;
                }
                break;
            }
            else if(cur->data<key){
                pre=cur;
                cur=cur->right;
            }
            else{
                suc=cur;
                cur=cur->left;
            }
            
        }
        
        return {pre,suc};
    }
};