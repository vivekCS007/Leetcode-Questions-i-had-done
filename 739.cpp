// 739. Daily Temperatures 

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(n);
        for (int i=n-1;i>=0;i--){
            if (st.top()==n) ans[i]=n;
            else{
                while(temperatures[i]>=temperatures[st.top()]) {
                    st.pop();
                    if (st.top()==n) {
                        ans[i]=n;
                        break;
                    }
                }
                ans[i]=st.top();
            }
            st.push(i);
        }
        for (int i=0;i<n;i++){
            if (ans[i]==n) ans[i]=0;
            else ans[i]=ans[i]-i;
        }
        return ans;
    }
};