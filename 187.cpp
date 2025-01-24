// 187. Repeated DNA Sequences
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n =s.length();
        // cout<<n;
        unordered_map<string,int> mp;
        vector<string> ans;
        for (int i=0;i<=n-10;i++){
            string st=s.substr(i,10);
            mp[st]++;
            if (mp[st]==2) ans.push_back(st);
        }
        return ans;
    }
};