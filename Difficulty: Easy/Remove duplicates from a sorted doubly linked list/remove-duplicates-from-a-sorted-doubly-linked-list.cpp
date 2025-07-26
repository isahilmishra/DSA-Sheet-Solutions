/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        if (!head) return NULL;

        unordered_set<int> seen;
        Node* current = head;

        while (current) {
            if (seen.find(current->data) != seen.end()) {
                // Duplicate found, remove current node
                Node* toDelete = current;
                Node* nextNode = current->next;

                if (current->prev) current->prev->next = current->next;
                if (current->next) current->next->prev = current->prev;

                delete toDelete;
                current = nextNode;
            } else {
                seen.insert(current->data);
                current = current->next;
            }
        }

        // Fix head in case first node was deleted
        while (head && seen.find(head->data) == seen.end()) {
            head = head->next;
        }

        return head;
    }
};