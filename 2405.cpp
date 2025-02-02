// 2405. Optimal Partition of String

class Solution {
public:
    int partitionString(string s) {
        int ans=1;
        unordered_map<char,int> mp;
        for (int i=0;i<s.length();i++){
            mp[s[i]]++;
            if (mp[s[i]]==2){
                mp.clear();
                mp[s[i]]++;
                ans++;
            }
        }
        return ans;
    }
};