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
        if(head == NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast->next!=NULL){
                fast = fast->next;
            }
            if(slow==fast){
                return true;
            }

        }
        return false;
        
    }
};