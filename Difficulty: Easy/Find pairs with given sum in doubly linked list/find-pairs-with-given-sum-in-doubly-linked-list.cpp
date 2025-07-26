// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
      vector<pair<int,int>> result;
       if (!head) return result;

        Node* start = head;
        Node* end = head;
        while (end->next) {
            end = end->next;
        }
        while (start != end && start->prev != end) {
            int sum = start->data + end->data;

            if (sum == target) {
                result.push_back({start->data, end->data});
                start = start->next;
                end = end->prev;
            } else if (sum < target) {
                start = start->next;
            } else {
                end = end->prev;
            }
        }

        return result;
    }
};