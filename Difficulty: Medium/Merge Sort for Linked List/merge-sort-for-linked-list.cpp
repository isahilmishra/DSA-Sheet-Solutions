/*
The structure of linked list is the following

struct Node {
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
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        vector<int> ans;
        Node* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->data=ans[i++];
            temp=temp->next;
        }
        return head;
    }
};