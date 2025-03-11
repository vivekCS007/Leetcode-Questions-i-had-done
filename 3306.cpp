// 3306. Count of Substrings Containing Every Vowel and K Consonants II

class Solution {
    public:
        bool isvowel(char i) {
            return (i=='a' || i=='e' || i=='i' || i=='o' || i=='u');
        }
        long long atk(string& word,int k){
            unordered_map<char,int> mp;
            int l=0;
            int r=0;
            long long ans=0;
            int n=word.size();
            int c=0;
            while(r<n){
                if(isvowel(word[r])) mp[word[r]]++;
                else c++;
                while(c>=k && mp.size()==5){
                    ans+=n-r;
                    if(isvowel(word[l])) mp[word[l]]--;
                    else c--;
                    if(mp[word[l]]==0) mp.erase(word[l]);
                    l++;
                }  
                r++;
    
            }
            return ans;
    
        }
        long long countOfSubstrings(string word, int k) {
            return atk(word, k) - atk(word, k + 1);
        }
    };