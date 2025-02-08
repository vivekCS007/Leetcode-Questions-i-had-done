// 2336. Smallest Number in Infinite Set

class SmallestInfiniteSet {
public:
    set<int> a;
    SmallestInfiniteSet() {
        for (int i=1;i<=1000;i++){
            a.insert(i);
        }
    }
    
    int popSmallest() {
        int x=*a.begin();
        a.erase(x);
        return x;
    }
    
    void addBack(int num) {
        a.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */