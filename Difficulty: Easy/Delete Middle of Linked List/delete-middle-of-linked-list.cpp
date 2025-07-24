/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
         if(head==NULL || head->next==NULL) return NULL;
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int req= cnt/2;
        temp=head;
       for(int i=0; i<req-1; i++) temp=temp->next;
        Node* delNode = temp->next;
        temp->next=temp->next->next;
        delete(delNode);
        return head;
    }
};