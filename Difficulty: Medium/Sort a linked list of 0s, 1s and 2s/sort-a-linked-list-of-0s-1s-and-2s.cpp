/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* temp=head;
        int cnt=0,cnt1=0,cnt2=0;
        while(temp!=NULL){
            if(temp->data==0) cnt++;
            else if(temp->data==1) cnt1++;
            else cnt2++;
            temp=temp->next;
        }
        temp=head;
        while(cnt-->0){
            temp->data=0;
            temp=temp->next;
        }
        while(cnt1-->0){
            temp->data=1;
            temp=temp->next;
        }
        while(cnt2-->0){
            temp->data=2;
            temp=temp->next;
        }
        return head;
    }
};