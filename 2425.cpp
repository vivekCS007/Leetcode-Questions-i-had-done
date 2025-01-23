// 2425. Bitwise XOR of All Pairings
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        long long ans=0;
        if (nums2.size()%2!=0) for (int i=0;i<nums1.size();i++){
                ans=ans^nums1[i];
        }

        if (nums1.size()%2!=0) for (int j=0;j<nums2.size();j++) ans=ans^nums2[j];
        return ans;
    }
};