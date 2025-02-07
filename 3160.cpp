// 3160. Find the Number of Distinct Colors Among the Balls

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> mp;
        int n=queries.size();
        // unordered_map<int,int> b;
        unordered_map<int,int> a;
        vector<int> ans;
        int count=0;
        for(auto i:queries){
            int x=0;
            int y=i[0];
            int z=i[1];
            if (mp[y]) {
                x=mp[y];
                a[x]--;
                if (a[x]==0) count--;
            }
            mp[y]=z;
            a[z]++;
            if (a[z]==1) count++;
            ans.push_back(count);

        }
        return ans;
    }
};