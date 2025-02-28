// 2130. Maximum Twin Sum of a Linked List

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
ListNode *reverse(ListNode *a){
    if (!a || a->next==NULL) return a;
    ListNode *b=reverse(a->next);
    a->next->next=a;
    a->next=NULL;
    return b;
}
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        // slow=slow->next;
        // reverse(slow);
        int ans=0;
        ListNode *temp=reverse(slow);
        fast=head;
        while(fast!=slow){
            ans=max(ans,temp->val+fast->val);
            temp=temp->next;
            fast=fast->next;
        }
        return ans;
    }
};