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
    ListNode* mergeKLists(vector<ListNode*>& listArray) {
         priority_queue<pair<int, ListNode*>,
                  vector<pair<int, ListNode*>>,greater<pair<int,ListNode*>>> pq;
    
    for(int i=0; i<listArray.size(); ++i){
        if(listArray[i]){
            pq.push({listArray[i]->val, listArray[i]});
        }
    }
    ListNode* dNode= new ListNode(-1);
    ListNode* temp= dNode;
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        
        ListNode* node = it.second;
        temp->next = node;
        temp = temp->next;

        if (node->next) {
            pq.push({node->next->val, node->next});
        }
    }
    return dNode->next;
    }
};