// 155. Min Stack

class MinStack {
public:
    stack<int> mi;
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mi.size()==0 || mi.top()>=val){
            mi.push(val);
        }
        s.push(val);
    }
    
    void pop() {
        if (s.top()==mi.top()){
            mi.pop();
        }
        s.pop();
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mi.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */