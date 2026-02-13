/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        if(root == NULL) return INT_MIN;
        int lMax = findMax(root->left);
        int rMax = findMax(root->right);
        return max(root->data, max(lMax, rMax));
    }

    int findMin(Node *root) {
        if(root == NULL) return INT_MAX;
        int lMin = findMin(root->left);
        int rMin = findMin(root->right);
        return min(root->data, min(lMin,rMin));
    }
};