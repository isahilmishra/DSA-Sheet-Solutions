/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
     int findLength(Node *slow,Node *fast){
    int cnt=1;
    slow=slow->next;
    while(slow!=fast){
        cnt++;
        slow=slow->next;
    }
    return cnt;
}
    int lengthOfLoop(Node *head) {
        // code here
    Node *slow=head; Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return findLength(slow,fast);
    }
    return 0;
    }
};