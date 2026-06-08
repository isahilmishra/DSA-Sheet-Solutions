/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        
        ListNode* lowDummyNode= new ListNode(-1);
        ListNode* lowTail=lowDummyNode;

        ListNode* highDummyNode= new ListNode(-1);
        ListNode* highTail=highDummyNode;
    
         while(temp!=NULL){
            if(temp->val<x){
                lowTail->next=temp;
                lowTail=lowTail->next;

            }
            else {
                highTail->next=temp;
                highTail=highTail->next;
            }
            temp=temp->next;
         }
         highTail->next=nullptr;
        lowTail->next=highDummyNode->next;
        return lowDummyNode->next;
    }
};