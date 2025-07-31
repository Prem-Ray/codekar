/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *addNode(Node *head, int p, int x) {
        // code here
        int count=0 ;
        
        if(head == nullptr) {
            if(p==0){
                return new Node(x) ;
            }
        }
        
        Node* temp = head ;
        
        while(temp != nullptr){
            if(count == p) break ;
            count++ ;
            temp = temp->next ;
        }
        
        Node * newNode = new Node(x) ;
        
        if(temp->next == nullptr){
            temp->next = newNode ;
            newNode->prev = temp ;
            return head ;
        }
        
        newNode->next = temp->next ;
        newNode->prev = temp ;
        
        temp->next->prev = newNode ;
        temp->next = newNode ;
        
        return head ;
    }
};