// 907. Sum of Subarray Minimums

class Solution {
    public:
        vector<int> nse(vector<int>&arr,int n){
            stack<int> st;
            vector<int> ans(n);
            // ans(n-1)=-1
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
                ans[i]=st.empty()?n:st.top();
                st.push(i);
            }        
            return ans;
            
        }
        vector<int> psee(vector<int> arr,int n){
            vector<int> pse(n);
            stack<int> st;
            for(int i=0;i<=n-1;i++){
                while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
                pse[i]=st.empty()?-1:st.top();
                st.push(i);
            }
            return pse;
        }
        int sumSubarrayMins(vector<int>& arr) {
            int n=arr.size();
            int ans=0;
            long long mod=1e9+7;
            vector<int> ns=nse(arr,n);
            vector<int> ps=psee(arr,n);
            for (int i=0;i<=n-1;i++){
                int l=i-ps[i];
                int r=ns[i]-i;
                ans=(ans+(r*l*1LL*arr[i])%mod)%mod;
            }
            return ans;
            
        }
    };