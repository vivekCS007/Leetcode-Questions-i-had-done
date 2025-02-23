// 1657. Determine if Two Strings Are Close

class Solution {
    public:
        bool closeStrings(string word1, string word2) {
            int n=word1.length();
            int m=word2.length();
            if(n!=m) return false;
            unordered_map<char,int> mp;
            unordered_map<char,int> mp2;
            for (auto i:word1) mp[i]++;
            for (auto i:word2) mp2[i]++;
            vector<int> a;
            vector<int> b;
            for(auto i:mp) if (mp2[i.first]==0) return false;
            for(auto i:mp2) if (mp[i.first]==0) return false;
            for(auto i:mp) a.push_back(i.second);
            for(auto i:mp2) b.push_back(i.second);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            return a==b;
        }
    };