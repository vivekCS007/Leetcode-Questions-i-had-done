// 2780. Minimum Index of a Valid Split

class Solution {
    public:
        int minimumIndex(vector<int>& nums) {
          int index ;
          unordered_map<int,int> mp1;
          unordered_map<int,int> mp2;
            for(int i = 0;i<nums.size();i++){
                mp1[nums[i]]++;
            }
            for(int i = 0;i<nums.size();i++){   
               mp2[nums[i]]++;
               if(2*mp2[nums[i]]>i+1 && 2*(mp1[nums[i]]-mp2[nums[i]])>nums.size()-i-1)return i;
            }
            return -1;
        }
    };