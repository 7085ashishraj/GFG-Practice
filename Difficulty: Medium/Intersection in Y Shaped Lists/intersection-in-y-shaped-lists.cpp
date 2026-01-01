class Solution {
  public:
  
    int findLength(Node* head){
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
    Node* intersectPoint(Node* head1, Node* head2) {
        int l_head1 = findLength(head1);
        int l_head2 = findLength(head2);
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        // Align both pointers to same distance from end
        if(l_head1 > l_head2){
            int diff = l_head1 - l_head2;
            while(diff--) temp1 = temp1->next;
        } else {
            int diff = l_head2 - l_head1;
            while(diff--) temp2 = temp2->next;
        }
        
        // Traverse together until intersection or end
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2) return temp1;  // intersection found
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return NULL; // no intersection
    }
};