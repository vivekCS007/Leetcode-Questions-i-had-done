// 150. Evaluate Reverse Polish Notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans=0;
        stack<string> st;
        for (auto i:tokens){
            if (i!="+" && i!="*" && i!="/" && i!="-") st.push(i);
            else{
                int a=stoi(st.top());
                st.pop();
                int b=stoi(st.top());
                st.pop();
                if(i=="+") b+=a;
                if(i=="*") b*=a;
                if(i=="-") b-=a;
                if(i=="/") b/=a;
                st.push(to_string(b));
            }
        }
            return stoi(st.top());

    }
};