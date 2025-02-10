// 84. Largest Rectangle in Histogram

class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> ans(n);
        st.push(-1);
        for (int i = n - 1; i >= 0; i--) {
            int c=arr[i];
            while(st.top()!=-1 && arr[st.top()]>=c){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> st;
        vector<int> ans(n);
        st.push(-1);
        for (int i = 0; i <n; i++) {
            int c=arr[i];
            while(st.top()!=-1 && arr[st.top()]>=c){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        vector<int> prev(n);
        next = nextSmallerElement(heights,n);
        long long ans=INT_MIN;
        prev=prevSmallerElement(heights,n);
        for (int i=0;i<n;i++){
            int l=heights[i];
            if (next[i]==-1) next[i]=n;
            int b=next[i]-prev[i]-1;
            long long a=l*b;
            ans=max(a,ans);
        }
        return ans;
    }
};