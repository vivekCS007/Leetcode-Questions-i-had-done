// 402. Remove K Digits

class Solution {
    public:
        string removeKdigits(string num, int k) {
            if (num.size()==k) return "0";
            string ans = "";
            for (char digit:num){
                while(k>0 && !ans.empty() && ans.back()>digit) {
                    ans.pop_back(); 
                    k--;
                }
                ans.push_back(digit);
            }
            
            ans=ans.substr(0,ans.size()-k);
            int i=0;
            while (i<ans.size() && ans[i]=='0')i++;
            ans=ans.substr(i);
            if(ans.empty()) return "0";
            
            return ans;
        }
    };
    