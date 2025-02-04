// 946. Validate Stack Sequences

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        if (pushed==popped) return true;
        int k=0;
        int n=pushed.size();
        for (int i=0;i<n;i++){
            st.push(pushed[i]);
            while(st.top()==popped[k]){
                st.pop();
                k++;
                if(k==n) return true;
                if (st.empty()) break;
            }
        }
        return k==n;
    }
};