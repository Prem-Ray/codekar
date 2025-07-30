/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node * temp = new Node(x) ;
        temp->next = NULL ;
        
        if(head==NULL) return temp ;
        
        
        Node * mover = head ;
        while(mover->next != NULL){
            mover = mover->next ;
        }
        
        mover->next = temp ;
        
        return head ;
    }
};