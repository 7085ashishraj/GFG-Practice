class Solution {
  public:
    Node* addOne(Node* head) {
        if (!head) return new Node(1);  // Handle empty list

        vector<int> v;
        Node* temp = head;

        // Step 1: Store digits in vector
        while (temp) {
            v.push_back(temp->data);
            temp = temp->next;
        }

        // Step 2: Add one to the last digit
        int n = v.size();
        v[n - 1] += 1;

        // Step 3: Handle carry
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] > 9) {
                v[i] = 0;
                if (i == 0) {
                    v.insert(v.begin(), 1);  // Insert carry at front
                } else {
                    v[i - 1] += 1;
                }
            }
        }

        // Step 4: Reconstruct the linked list
        Node* newNode = new Node(v[0]);
        Node* tail = newNode;
        for (int i = 1; i < v.size(); i++) {
            tail->next = new Node(v[i]);
            tail = tail->next;
        }

        return newNode;
    }
};