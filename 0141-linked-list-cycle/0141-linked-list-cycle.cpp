/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if there have one item or empty list then return false 
        if(head==NULL || head->next==NULL ) return false ;

        // take two iterator
        ListNode* slow = head ;
        ListNode* fast = head ;

        // take a loop if you are in the even size or odd size not cyclic linked list
        // then break the loop
        while(fast!=NULL && fast->next!=NULL){
            
            // fast moves two step forward
            fast = fast->next->next ;

            // slow moves one step forward 
            slow = slow->next ;

            // this is the meeting point of fast and slow
            if(fast == slow){
                return true ;
            }
        }
        // if you are here means, you are in a normal linked list
        // there have no loop
        return false ;
    }
};