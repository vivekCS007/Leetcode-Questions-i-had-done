// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        // int r=0;
        int a=0;
        while(l<n){
            if (l==0){
                l=1;
                a=1;
                continue;
            }
            if (nums[l]==nums[l-1]){
                a++;
                // l++;
            }
            else a=1;
            if (a>2){
                nums.erase(nums.begin()+l);
                a--;
                n--;
                continue;
            } 
            l++;           
        }
        return n;
    }
};