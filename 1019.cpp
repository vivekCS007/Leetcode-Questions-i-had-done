// 1019. Next Greater Node In Linked List

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
        void solve(ListNode* &head, ListNode* &curr, ListNode* &prev) {
            if (curr == NULL) {
                head = prev;
                return;
            }
            ListNode *fwd = curr->next;
            solve(head, fwd, curr);
            curr->next = prev;
        }
        ListNode* reverseList(ListNode* head) {
            ListNode *curr = head;
            ListNode *prev = NULL;
            solve(head, curr, prev);  
            return head;  
        }
        vector<int> nextLargerNodes(ListNode* head) {
            head=reverseList(head);
            stack<int> s;
            vector<int> ans;
            ListNode *temp=head;
            while(temp!=NULL){
                while(!s.empty() && s.top()<=temp->val) s.pop();
                if(s.empty()) ans.push_back(0);
                else ans.push_back(s.top());
                s.push(temp->val);
                temp=temp->next;
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
    };