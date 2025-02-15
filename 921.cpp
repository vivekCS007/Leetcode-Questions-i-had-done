// 921. Minimum Add to Make Parenthesis Valid

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for (char i:s){
            if (s.empty() && i==')') ans++;
            else if (i=='(') st.push(i);
            else if (st.empty()) ans++;
            else st.pop();

        }
        return ans+st.size();
    }
};