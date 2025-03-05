// 438. Find All Anagrams in a String

class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            unordered_map<char,int> mp,mp1;
            for(char i:p) mp[i]++;
            int k=p.length();
            int n=s.length();
            for(int i=0;i<k;i++) mp1[s[i]]++;
            vector<int> ans;
            for(int i=0;i+k<=n;i++){
                if(mp==mp1) ans.push_back(i);
                mp1[s[i]]--;
                if(mp1[s[i]]==0) mp1.erase(s[i]);
                mp1[s[i+k]]++;
            }
            return ans;
        }
    };