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
    void deleteNode(ListNode* node) {
        // copy the value of the next node
        node->val = node->next->val ;

        ListNode * temp = node->next ;

        // skip the next node and linked with the next of next node
        node->next = node->next->next ;

        delete temp ;

    }
};