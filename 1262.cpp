// 1262. Greatest Sum Divisible by Three

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> a1, a2;
        long long sum = 0;
        for (int num : nums) {
            sum += num;
            if (num % 3 == 1) {
                a1.push_back(num);
            } else if (num % 3 == 2) {
                a2.push_back(num);
            }
        }
        if (sum % 3 == 0) return sum;
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());

        if (sum % 3 == 1) {
            long long s1 = -1, s2 = -1;
            if (!a1.empty()) {
                s1 = sum - a1[0];
            }
            if (a2.size() >= 2) {
                s2 = sum - a2[0] - a2[1];
            }
            if (s1 != -1 && s2 != -1) {
                return max(s1, s2);
            }
            return max(s1, s2);
        }
        else if (sum % 3 == 2) {
            long long s1 = -1, s2 = -1;
            if (!a2.empty()) {
                s1 = sum - a2[0];
            }
            if (a1.size() >= 2) {
                s2 = sum - a1[0] - a1[1];
            }
            if (s1 != -1 && s2 != -1) {
                return max(s1, s2);
            }
            return max(s1, s2);
        }
        return sum; 
    }
};
