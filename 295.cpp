// 295. Find Median from Data Stream

class MedianFinder {
public:
vector<int> a;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        auto it = lower_bound(a.begin(), a.end(), num);
        a.insert(it, num);
    }
    
    double findMedian() {
        int n=a.size();
        if (n%2==0){
            return ((a[n/2]+a[n/2-1])/2.0);
        }
        return a[n/2];
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */