/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        int sum = 0;
        if (root == NULL) return 0;
        sum += (root->data) + sumBT(root->left) + sumBT(root->right);
        return sum;
    }
};