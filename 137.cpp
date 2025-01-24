// 137. Single Number II
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long sum=0;
        set<int> s;
        for (int i:nums){
            sum+=i;
            s.insert(i);
        }
        long long a=0;
        for (int i:s){
            a+=i;
        }
        a*=3;
        return ((a-sum)/2);
    }
};