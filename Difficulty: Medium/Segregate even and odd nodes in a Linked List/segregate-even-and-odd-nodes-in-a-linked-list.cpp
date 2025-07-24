// User function template for C++

/*
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
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        vector<int> arr;
    Node *temp=head;

    while(temp!=NULL){
        if(temp->data %2 == 0){
            arr.push_back(temp->data);
        }
        temp=temp->next;
    }
     temp=head;
    while(temp!=NULL){
        if(temp->data %2 != 0 ){
            arr.push_back(temp->data);
        }
        temp=temp->next;
    }
     temp=head;
     int i=0;
     while(temp != NULL && i<arr.size()){
         temp->data=arr[i++];
         temp=temp->next;
     }
     return head;
    }
};