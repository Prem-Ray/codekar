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
    ListNode* merge(ListNode* left , ListNode* right){
        ListNode* t1 = left ;
        ListNode* t2 = right ;

        ListNode* dummyNode = new ListNode(-1) ;
        ListNode* temp = dummyNode ;

        while(t1!=NULL && t2!=NULL){
            if(t1->val < t2->val){
                temp->next = t1 ;
                t1 = t1->next ;
                temp = temp->next ;
            }else{
                temp->next = t2 ;
                t2 = t2->next ;
                temp = temp->next ;
            }
        }

        if(t1){
          temp->next = t1 ;  
        }
        if(t2){
            temp->next = t2 ;
        }

        return dummyNode->next ;
    }

    ListNode* findMid(ListNode* head){
        if(head==NULL || head->next==NULL) return head ;

        ListNode* fast = head->next ;
        ListNode* slow = head ;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow ;
    }

    ListNode* sortList(ListNode* head) {

        if(head==NULL || head->next==NULL) return head ;

        ListNode* mid = findMid(head) ;

        ListNode* newhead = mid->next ;
        mid->next = NULL ;

        ListNode* left = head ;
        ListNode* right = newhead ;

        left = sortList(left) ;
        right = sortList(right) ;

        return merge(left,right) ;

    }
};