// 2807. Insert Greatest Common Divisors in an Array

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
        
        ListNode* insertGreatestCommonDivisors(ListNode* head) {
            if(!head || !(head->next)) return head;
            int x=head->val;
            ListNode *temp=head;
            while(temp ){
                ListNode *a=temp;
                temp=temp->next;
                if(temp==NULL) break;
                x=__gcd(a->val,temp->val);
                a->next=new ListNode(x);
                a->next->next=temp;
            }
            return head;
    
        }
    };