// 3443. Maximum Manhattan Distance After K Changes

class Solution {
public:
    int maxDistance(string s, int k) {
        unordered_map<char,int> mp;
        // for (char c:s) mp[c]++;
        // int x=mp['N']-mp['S'];
        // int y=mp['E']-mp['W'];
        // return abs(x)+abs(y)+2*k;
        // int x=0;
        // int y=0;
        // char a,b;
        // if (mp['N']>mp['S']) a='N';
        // else a='S';
        // if (mp['E']>mp['W']) b='E';
        // else b='W';
        // int ans=0;
        // int c=0;
        // for (char ch:s){
        //     if (ch=='N' || ch=='s'){
        //         if (ch==a) c++;
        //         else if (k) {
        //             c++;
        //             k--;
        //             if (c>ans) ans=c;
        //         }
        //         else c--;
        //         if (c>ans) ans=c;
        //     }
        //     else {
        //         if (ch==b) c++;
        //         else if (k) {
        //             c++;
        //             k--;
        //             if (c>ans) ans=c;
        //         }
        //         else c--;
        //         if (c>ans) ans=c;
        //     }
        //     // cout<<c<<endl;
        //     if (c>ans) ans=c;
        // }
        int x=0,y=0;
        int ans=0;
        for (int i=0;i<s.length();i++){
            mp[s[i]]++;
            char a=s[i];
            if (a=='N') y++;
            else if (a=='S') y--;
            else if (a=='E') x++;
            else x--;
            int temp =(abs(x))+abs(y);
            int z=min(mp['N'],mp['S'])+min(mp['E'],mp['W']);
            int l=min(z,k);
            temp+=2*l;
            ans=max(temp,ans);
        }
        return ans;

        return ans;
    }
};