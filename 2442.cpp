// 2442. Count Number of Distinct Integers After Reverse Operations

class Solution {
    public:
    int rev(int num) {
        int reversedNum = 0;
        while (num != 0) {
            int digit = num % 10;      
            reversedNum = reversedNum * 10 + digit; 
            num /= 10;
        }
        return reversedNum;
    }
        int countDistinctIntegers(vector<int>& nums) {
            set<int> a;
           for(int i:nums){
                a.insert(i);
                a.insert(rev(i));
           }
           return a.size();
        }
    };