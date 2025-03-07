// 76. Minimum Window Substring

class Solution {
    public:
        string minWindow(string s, string t) {
            if(t.length()>s.length()) return "";
            if(s==t) return s;
            unordered_map<char,int> mp;
            for(auto i:t)mp[i]++;
            int count=mp.size();
            int i=0,j=0;
            string ans="";
            pair<int,int> z={INT_MIN,INT_MIN};
            pair<int,int> r=z;
            int x=INT_MAX;
            while(j<s.length()){
                if(mp.find(s[j])!=mp.end()){
                    mp[s[j]]--;
                    if(mp[s[j]]==0) count--;
                }
                while(count==0){
                    if(j-i+1<x){
                        x=j-i+1;
                        // ans=s.substr(i,j-i+1);
                        z={i,j};
                    }
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]>0) count++;
    
                    }
                    i++;
                }
                j++;
    
            }        
            if(z==r) return "";
            ans=s.substr(z.first,z.second-z.first+1);
            return ans;
        }
    };