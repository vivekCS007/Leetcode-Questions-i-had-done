// 1461. Check If a String Contains All Binary Codes of Size K

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.length();
        if (k>=n) return false;
        set<string> st;
        for(int i=0;i<n-k+1;i++){
            st.insert(s.substr(i,k));
            // cout<<s.substr(i,k)<<endl;
            
        }
        if(st.size()==pow(2,k)) return true;
        return false;
    }
};