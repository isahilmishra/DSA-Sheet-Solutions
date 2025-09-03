/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
       if(!head) return NULL;
       
       Node* prev=NULL;
       Node* curr=head;
       Node* next=NULL;
       int cnt=0;
       while(curr && cnt<k){
          next=curr->next;
          curr->next=prev;
          
          prev=curr;
          curr=next;
          cnt++;
       }
        head->next=reverseKGroup(curr,k);
        
        return prev;
    }
};