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
    Node* swapKth(Node* head, int k) {
        // code here
        if(!head) return head;
        
        int size=0;
        Node* curr=head;
        while(curr){
            size++;
            curr=curr->next;
        }
        
        if(k>size) return head;
        if(2*k-1==size) return head;
        
        Node* prev1=nullptr;
        Node* temp1=head;
        for(int i=1; i<k; i++){
            prev1=temp1;
            temp1=temp1->next;
        }
        Node* prev2=nullptr;
        Node* temp2=head;
        for(int i=1; i<size-k+1; i++){
            prev2=temp2;
            temp2=temp2->next;
        }
        //Swapping the nodes;
        if(prev1) prev1->next=temp2;
        if(prev2) prev2->next=temp1;
        
        Node* node=temp1->next;
        temp1->next=temp2->next;
        temp2->next=node;
        
        //Fix head if needed
        if(k==1) head=temp2;
        if(k==size) head=temp1;
        
        return head;
    }
};