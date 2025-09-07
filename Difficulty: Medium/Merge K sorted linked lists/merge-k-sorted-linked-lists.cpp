/*
class Node {
  public:
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
    Node* mergeKLists(vector<Node*>& listArray) {
        // code here
         priority_queue<pair<int, Node*>,
                  vector<pair<int, Node*>>,greater<pair<int,Node*>>> pq;
    
    for(int i=0; i<listArray.size(); ++i){
        if(listArray[i]){
            pq.push({listArray[i]->data, listArray[i]});
        }
    }
    Node* dNode= new Node(-1);
    Node* temp= dNode;
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        
        Node* node = it.second;
        temp->next = node;
        temp = temp->next;

        if (node->next) {
            pq.push({node->next->data, node->next});
        }
    }
    return dNode->next;
    }
};