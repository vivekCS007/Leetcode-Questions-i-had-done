// 1310. XOR Queries of Subarray

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> px;
        px.push_back(0);
        int n=arr.size();
        for(int i=1;i<=n;i++){
            px.push_back(px[i-1]^arr[i-1]);
        }
        for (int i:px)  cout<<i<<" ";
        vector<int> ans;
        for (auto i:queries){
            if (i[0]==i[1]) ans.push_back(arr[i[0]]);
            else ans.push_back(px[i[1]+1]^px[i[0]]);
        }
        return ans;
    }
};