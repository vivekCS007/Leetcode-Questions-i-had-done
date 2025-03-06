// 1472. Design Browser History

class BrowserHistory {
    public:
        class Node{
            public: string data;
            public: Node *next;
            public: Node *prev;
            public: Node(string x){
                data=x;
                this->next=NULL;
                this->prev=NULL;
            }
        };
        Node *curr=NULL,*head=NULL;
        BrowserHistory(string homepage) {
            head=new Node(homepage);
            curr=new Node(homepage);
        }
        
        void visit(string url) {
            curr->next=new Node(url);
            curr->next->prev=curr;
            curr=curr->next;
        }
        
        string back(int steps) {
            for(int i=0;i<steps;i++){
                if(curr->prev==NULL) return curr->data;
                curr=curr->prev;
            }
            return curr->data;
        }
        
        string forward(int steps) {
            
            for(int i=0;i<steps;i++){
                if(curr->next==NULL) return curr->data;
                curr=curr->next;
            }
            return curr->data;
        }
    };
    
    /**
     * Your BrowserHistory object will be instantiated and called as such:
     * BrowserHistory* obj = new BrowserHistory(homepage);
     * obj->visit(url);
     * string param_2 = obj->back(steps);
     * string param_3 = obj->forward(steps);
     */