// 622. Design Circular Queue

class MyCircularQueue {
public:
    vector<int> v;
    int f, b, s, c;
    MyCircularQueue(int k) {
        v = vector<int>(k, -1);
        f = 0;
        b = 0;
        s = 0;
        c = k;
    }

    bool enQueue(int value) {
        if (isFull())
            return false;
        v[b] = value;
        if (b == c - 1)
            b = 0;
        else
            b++;
        s++;
        return true;
    }

    bool deQueue() {
        if (isEmpty())
            return false;
        v[f] = -1;
        if (f == c - 1)
            f = 0;
        else
            f++;
        s--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return v[f];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        if (b == 0)
            return v[c - 1];
        else
            return v[b - 1];
    }

    bool isEmpty() { return (s == 0); }

    bool isFull() { return (s == c); }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */