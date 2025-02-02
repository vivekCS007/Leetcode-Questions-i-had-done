// 641. Design Circular Deque

class MyCircularDeque {
public:
    vector<int> v;
    int f, b, s, c;

    MyCircularDeque(int k) {
        v = vector<int>(k, -1);
        f = 0;
        b = 0;
        s = 0; 
        c = k;
    }

    bool insertFront(int value) {
        if (isFull()) return false;
        if (f == 0) f = c - 1;
        else f--; 
        v[f] = value;
        s++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull())return false;
        v[b] = value;
        if (b == c - 1) b = 0;  
        else b++; 
        s++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) return false;
        v[f] = -1;
        if (f == c - 1) f = 0; 
        else f++;
        s--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) return false;
        if (b == 0) b = c - 1; 
        else b--; 
        v[b] = -1;
        s--;
        return true;
    }

    int getFront() {
        if (isEmpty()){return -1;}
        return v[f];
    }

    int getRear() {
        if (isEmpty()){return -1;} 
        if (b == 0) {
            return v[c - 1]; 
        } 
        else {
            return v[b - 1]; 
        }
    }

    bool isEmpty() { return (s == 0); }

    bool isFull() { return (s == c); }
};