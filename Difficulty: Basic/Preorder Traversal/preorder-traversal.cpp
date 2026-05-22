/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> preOrder(Node* root) {
        //Iterative way :-
        vector<int> res;
        if(root == NULL) return res;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            res.push_back(root->data);
            if(root->right != NULL){
                st.push(root->right);
            }
            if(root->left != NULL){
                st.push(root->left);
            }
        }
        return res;
    }
};