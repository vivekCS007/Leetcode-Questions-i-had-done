// 567. Permutation in String 

class Solution {
    public:
        bool checkInclusion(string p, string s) {
              unordered_map<char,long long> mp,mp1;
            for(char i:p) mp[i]++;
            long long k=p.length();
            long long n=s.length();
            if(k>n) return false;
            for(long long i=0;i<k;i++) mp1[s[i]]++;
            for(long long i=0;i+k<=n;i++){
                if(mp==mp1) return true;
                mp1[s[i]]--;
                if(mp1[s[i]]==0) mp1.erase(s[i]);
                mp1[s[i+k]]++;
            }
            return false;
        }
    };