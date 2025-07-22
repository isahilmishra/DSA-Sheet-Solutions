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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head; 
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    int req=(size/2)+1;
    ListNode *middle=head;
    int cnt=0;
    while(middle!=NULL){
        cnt++;
        if(cnt==req) break;
        middle=middle->next;
    }
    return middle;
    }
};