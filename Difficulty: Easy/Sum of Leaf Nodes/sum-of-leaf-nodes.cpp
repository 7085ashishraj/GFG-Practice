/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sumOfLeaf(Node* root){
        int sum = 0;
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL){
            sum += root->data;
        }
        return sum + sumOfLeaf(root->left) + sumOfLeaf(root->right);
    }
    int leafSum(Node* root) {
        // code here
        sumOfLeaf(root);
    }
};