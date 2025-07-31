/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head == nullptr) return nullptr ;
        
        int count = 0 ;
        Node* temp = head ;
        
        while(temp != nullptr){
            count++ ;
            if(count==x) break ;
            temp = temp->next ;
        }
        
        Node* back = temp->prev ;
        Node* front = temp->next ;
        
        if(back==nullptr && front==nullptr){
            delete temp ;
            return nullptr ;
        }else if(back==nullptr){
            head = head->next ;
            head->prev = nullptr ;
            temp->next = nullptr ;
            delete temp ;
            return head ;
        }else if(front==nullptr){
            temp->prev->next = nullptr ;
            temp->prev = nullptr ;
            delete temp ;
            return head ;
        }
        
        back->next = front ;
        front->prev = back ;
        
        temp->prev = nullptr ;
        temp->next = nullptr ;
        
        return head ;
    }
};