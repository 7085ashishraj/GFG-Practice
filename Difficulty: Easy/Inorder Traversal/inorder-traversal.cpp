/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> inOrder(Node* root) {
        //Iterative way:- 
        stack<Node*> st;
        vector<int> res;
        Node* node = root;
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty() == true) break;
                node = st.top();
                st.pop();
                res.push_back(node->data);
                node = node->right;
            }
        }
        return res;
    }
};