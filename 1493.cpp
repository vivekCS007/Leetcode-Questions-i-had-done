// 1493. Longest Subarray of 1's After Deleting One Element

class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            stack<int> st;
            for(int i:nums){
                if(st.empty()) st.push(i);
                else if (i==1 && st.top()!=0){
                    int a=st.top();
                    st.pop();
                    st.push(a+1);
                }
                else st.push(i); 
            }
            if(st.size()==1){
                if (st.top()==0) return 0;
                else return st.top()-1;
            }
            if (st.size()==2){
                int a=st.top();
                st.pop();
                return a+st.top();
            }
            int a=0;
            int b=0;
            int c=0;
            int ans=INT_MIN;
            while(!st.empty()){
                c=b;
                b=a;
                a=st.top();
                cout<<a<<endl;
                st.pop();
                ans=max(ans,a+b+c);
            }
            return ans;
        }
};