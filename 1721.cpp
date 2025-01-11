// 1721. Swapping Nodes in a Linked List
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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode *fast=head;
       while(k!=1){
        fast=fast->next;
        k--;
       }
       ListNode *first=fast;
       ListNode *slow=head;
       while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
       }
       swap(first->val,slow->val);
       return head;
    }
};