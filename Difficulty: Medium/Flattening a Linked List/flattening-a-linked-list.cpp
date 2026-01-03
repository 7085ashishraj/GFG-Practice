/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
   // Merge two sorted linked lists using bottom pointer
    Node* mergeTwoLists(Node* a, Node* b) {
        // Base cases
        if (!a) return b;
        if (!b) return a;

        Node* result;

        if (a->data < b->data) {
            result = a;
            result->bottom = mergeTwoLists(a->bottom, b);
        } else {
            result = b;
            result->bottom = mergeTwoLists(a, b->bottom);
        }

        // Remove next pointer
        result->next = NULL;
        return result;
    }
    Node *flatten(Node *root) {
        // code here
         // Base case
        if (!root || !root->next)
            return root;

        // Flatten the right side
        root->next = flatten(root->next);

        // Merge current list with right list
        root = mergeTwoLists(root, root->next);

        return root;
    }
        
};