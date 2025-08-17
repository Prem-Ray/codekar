/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head ;

        ListNode* fast = head ;
        ListNode* slow = head ;

        for(int i=0 ; i<n ; i++){
            fast = fast->next ;
        }

        if(fast==NULL){
            slow = slow->next ;
            head->next = NULL ;
            delete head ;
            return slow ;
        }

        while(fast->next != NULL){
            slow = slow->next ;
            fast = fast->next ;  
        }

        ListNode* deleteNode = slow->next ;
        slow->next = deleteNode->next ;
        deleteNode->next = NULL ;
        delete deleteNode ;

        return head ;
    }
};