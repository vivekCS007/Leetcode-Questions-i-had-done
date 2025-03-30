// 763. Partition Labels

class Solution {
    public:
        vector<int> partitionLabels(string s) {
            map<int,int> mp;
            vector<int> ans;
            int n=s.length();
            for(int i=0;i<n;i++) mp[s[i]]=i;
            int ma=0;
            int prev=0;
            for(int i=0;i<s.length();i++){
                // for(int j=i;j<s.length();j++){
                     ma=max(mp[s[i]],ma);
    
                // }
                if(ma==i){
                    ans.push_back(ma-prev+1);
                    prev=i+1;
                    i=ma;
                }
            }
            return ans;
        }
    };