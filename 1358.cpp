// 1358. Number of Substrings Containing All Three Characters

class Solution {
    public:
        int numberOfSubstrings(string s) {
            int n=s.length();
            int ans=0;
            int i=0,j=0;
            unordered_map<char,int> mp;
            while(j<n){
                mp[s[j]]++;
                while(mp.size()==3){
                    ans+=n-j;
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
            return ans;
        }
    };