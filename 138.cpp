// 138. Copy List with Random Pointer

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        Node *h=new Node(head->val);
        unordered_map<Node*,Node*> mp;
        Node *temp=head;
        temp=temp->next;
        Node *t=h;
        mp[head]=h;
        while(temp){
            t->next=new Node(temp->val);
            t=t->next;
            mp[temp]=t;
            temp=temp->next;
            
        }
        temp=head;
        t=h;
        while(temp){
            t->random=mp[temp->random];
            t=t->next;
            temp=temp->next;
        }
        return h;
    }
};