// 229. Bulls and Cows

class Solution {
    public:
        string getHint(string secret, string guess) {
            int n=secret.length();
            unordered_map<char,int> mp;
            unordered_map<char,int> mp2;
            for(auto i:secret) mp[i]++;
            int a=0;
            for(auto i:guess) mp2[i]++;
            for(int i=0;i<n;i++){
                if (secret[i]==guess[i]){
                    mp[secret[i]]--;
                    mp2[secret[i]]--;
                    a++;
                }
            }
            int b=0;
            for(auto i:mp){
                b+=min(i.second,mp2[i.first]);
            }
            string s=to_string(a)+'A'+to_string(b)+'B';
            return s;
            
        }
    };