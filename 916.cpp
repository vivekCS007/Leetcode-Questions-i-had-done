// 916. Word Subsets

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char, int> m;
        for (auto it : words2) {
            map<char, int> tem;
            for (int i = 0; i < it.size(); i++) {
                tem[it[i]]++;
            }
            for (auto itr : tem) {
                char c = itr.first;
                int freq = itr.second;
                m[c] = max(m[c], tem[c]);
            }
        }
        vector<string> ans;
        for (auto it : words1) {
            map<char, int> m2;
            for (auto i : it) {
                m2[i]++;
            }
            bool f = 1;
            for (auto itr : m) {
                char c = itr.first;
                int freq = itr.second;
                if (m2[c] >= freq) {
                } else {
                    f = 0;
                    break;
                }
            }
            if (f)
                ans.push_back(it);
        }
        return ans;
    }
};