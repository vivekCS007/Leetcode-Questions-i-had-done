// 1352. Product of the Last K Numbers

class ProductOfNumbers {
public:
    // long long ans=1;
    vector<int> a;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        // int x=a.size();
        // while()
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int ans=1;
        int x=a.size();
        for (int i=x-k;i<x;i++){
            ans*=a[i];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */