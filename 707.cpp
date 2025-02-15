// 707. Design Linked List

class Node{
    public:
    int v;
    Node* next;
    Node(int x){
        this->v=x;
        this->next=nullptr;
    }
};

class MyLinkedList {
public:
Node* head;
int s;
    MyLinkedList() {
        this->head=nullptr;
        this->s=0;
    }
    
    int get(int index) {
        if(index<0 || index>=s)return -1;
        Node* temp=head;
        for(int i=0;i<index;i++)temp=temp->next;
        return temp->v; 
    }
    
    void addAtHead(int val) {
        Node* n=new Node(val);
        n->next=head;
        head=n;
        s++;
    }
    
    void addAtTail(int val) {
       Node* n= new Node(val);
       if(head==nullptr)head=n;
       else{
        Node* temp=head;
        while(temp->next!=nullptr)temp=temp->next;
        temp->next=n;
       }
       s++;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){addAtHead(val);return;}
        if(index==s){addAtTail(val);return;}
        if(index>s)return;
        Node* temp=head;
        for(int i=0;i<index-1;i++)temp=temp->next;
        Node* n= new Node(val);
        n->next=temp->next;
        temp->next=n;
        s++;   }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=s)return;
        if(index==0){
            head=head->next;
            s--;return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++)temp=temp->next;
        Node* n=temp->next;
        temp->next=temp->next->next;
        s--;
        // delete(n);
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */