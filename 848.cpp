// 848. Shifting Letters

#include <strings.h>
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for (int j=shifts.size()-2;j>=0;j--){
            shifts[j]%=26;
            shifts[j]+=shifts[j+1];
        }
        for (int i=0;i<s.length();i++){
            int k=s[i]-'a';
            k=k+shifts[i];
            k%=26;
            s[i]=k+'a';
        }
        return s;
    }
};