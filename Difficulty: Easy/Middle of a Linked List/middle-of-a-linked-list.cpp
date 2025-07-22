/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
    Node *temp=head; 
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    int req=(size/2)+1;
     temp=head;
     while(temp!=NULL){
         req--;
         if(req==0) break;
         temp=temp->next;
     }
     return temp->data;
    }
};