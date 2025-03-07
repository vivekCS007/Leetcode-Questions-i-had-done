// 904. Fruit Into Baskets

class Solution {
    public:
        int totalFruit(vector<int>& fruits) {
            unordered_map<int,int> mp;
            int i=0;
            int j=1;
            if(fruits.size()==1) return 1;
            for(int i=0;i<2;i++) mp[fruits[i]]++;
            int n=fruits.size();
            int ans=2;
            while(j<n){
                if(mp.size()==2){
                    ans=max(ans,j-i+1);
                    if(j==n-1) break;
                    j++;
                    mp[fruits[j]]++;
                }
                else if(mp.size()<2){
                    if (j==n-1) break;
                    j++;
                    mp[fruits[j]]++;
    
                    ans=max(ans,j-i+1);
                    
                }
                else{
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0) mp.erase(fruits[i]);
    
                    // cout<<i<<" "<<mp.size()<<endl;
                    i++;
                }
            }
            return ans;
        }
    };