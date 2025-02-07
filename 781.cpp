// 781. Rabbits in Forest

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int ans=0;
        for (int i:answers) mp[i]++;
        // for (auto i:mp){
        //     int x=i.first
        // }
        // for (auto i:mp){
        //     if (i.first==0) ans+=i.second;
        //     else if (i.first==1){
        //         ans+=i.second;
        //         if (i.second%2!=0) ans++;
        //     }
        //     else if (i.first+1>=i.second) ans+=i.first+1;
        //     else {
        //         ans+=ceil(i.second)*1.0/i.first;
        //     }
        // }
        int n=answers.size();
        for (int i=0;i<n;i++){
            if (answers[i]==0 ) ans++;
            else if (mp[answers[i]]>0){
                ans+=answers[i]+1;
                mp[answers[i]]-=(answers[i]+1);
            }
        }
        return ans;
    }
};