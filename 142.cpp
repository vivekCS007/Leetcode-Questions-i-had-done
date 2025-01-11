// 142. Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        bool isvalid=false;
        if (head==NULL || head->next==NULL || head->next->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast) {
                isvalid=true;
                break;
            }
        }
        
        fast=head;
        if (!isvalid) return NULL;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};