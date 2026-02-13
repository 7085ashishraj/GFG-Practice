/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root == NULL) return -1;
        int lH = height(root->left);
        int rH = height(root->right);
        return 1 +  max(lH,rH);
    }
};