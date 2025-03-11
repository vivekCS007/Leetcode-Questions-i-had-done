// 92. Reverse Linked List II

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
        ListNode* reverseBetween(ListNode* head, int l, int r) {
            if(l==r) return head;
            ListNode* a = new ListNode(0);
            a->next = head;
            ListNode* prev = a;
            for(int i=1;i<l;i++) prev=prev->next;
            int k=r-l;
            int i=0;
            ListNode *next=NULL;
            ListNode *curr=prev->next;
            while(i<k){
                i++;
                next=curr->next;
                curr->next=next->next;
                next->next=prev->next;
                prev->next=next;
            }
            return a->next;
        }
    };