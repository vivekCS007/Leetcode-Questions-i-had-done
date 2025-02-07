// 769. Max Chunks To Make Sorted

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int p=0;
        int ans=0;
        int n=arr.size();
        for (int i=0;i<n;i++){
            int x=arr[i]-i;
            p+=x;
            if (p==0) ans++;
        }
        return ans;
    }
};