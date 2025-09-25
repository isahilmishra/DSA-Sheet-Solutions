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
    ListNode* setToLL(map<int,int> &st){
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        for(auto it: st){
            if(it.second==1){
            ListNode* node= new ListNode(it.first);
            if(!head){
                head=node;
                tail=node;
            }
            else{
                tail->next=node;
                tail=node;
            }
          }
        }
        return head;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        map<int,int> st;
        while(temp!=NULL){
            st[temp->val]++;
            temp=temp->next;
        }
        ListNode* newHead= setToLL(st);
        return newHead;
    }
};