// Sum of Square Numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        set<int> a;
        for (long long i=0;i*i<=c;i++){
            a.insert(i*i);
        }
        for (long long i:a){
            if (a.find(c-i)!=a.end()) return true;
        }
        return false;
    }
};
