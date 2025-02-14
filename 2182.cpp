// 2182. Construct String With Repeat Limit

class Solution {
public:
    string repeatLimitedString(string s, int k) {
        unordered_map<char,int> mp;
        for (char i:s){
            mp[i]++;
        }
        vector<pair<int,int>> a;
        for (auto i:mp){
            a.push_back({i.first,i.second});
        }
        sort(a.rbegin(),a.rend());
        string ans="";
        while(!a.empty()){
            if(a[0].second<=k){
                for (int i=0;i<a[0].second;i++) ans+=a[0].first;
                a[0].second=0;
            }
            else{
                for (int i=0;i<k;i++) ans+=a[0].first;
                a[0].second-=k;
            }
            if (a[0].second==0){
                a.erase(a.begin());
                continue;
            }
            if(a.size()<=1) break;
            // if(a[1].second<=k){
            //     for (int i=0;i<a[1].second;i++) ans+=a[1].first;
            //     a[1].second=0;
            // }
            // else{
            //     for (int i=0;i<k;i++) ans+=a[1].first;
            //     a[1].second-=k;
            // }
            
            ans+=a[1].first;
            a[1].second--;
            if (a[1].second==0){
                a.erase(a.begin()+1);
                continue;
            }
        }
        return ans;
    }
};