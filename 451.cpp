using namespace std;
class Solution {
public:
    static bool cmp(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), cmp);
        string result = "";
        for (const auto& p : freqVec) {
            result.append(p.second, p.first);
        }
        return result;
    }
};
