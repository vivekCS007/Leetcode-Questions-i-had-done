// 2559. Count Vowel Strings in Ranges

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n, 0);
        vector<int> has;
        char a = words[0][0];
        char b = words[0][words[0].length() - 1];
        if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') &&
            (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')) {
            has.push_back(1);
        }
        else has.push_back(0);
        for (int i = 1; i < words.size(); i++) {
            a = words[i][0];
            b = words[i][words[i].length() - 1];
            if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') &&
                (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')) {
                has.push_back(has[i - 1] + 1);
            } else
                has.push_back(has[i - 1]);
        }
        // cout<<has.size();
        for (int i = 0; i < n; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            if (l == 0)
                ans[i] = has[r];
            else
                ans[i] = has[r] - has[l - 1];
        }
        return ans;
    }
};