// 970. Powerful Integers

class Solution {
    public:
        vector<int> powerfulIntegers(int x, int y, int bound) {
            vector<int> ans;
            set<int> a;
            int i=0;
            while(pow(x,i)<=bound){
                int j=0;
                while(pow(y,j)<=bound){
                    if(pow(x,i)+pow(y,j)>bound) break;
                    ans.push_back(pow(x,i)+pow(y,j));
                    if(y==1) break;
                    j++;
                }
                if(x==1) break;
                i++;
            }
            for(auto k:ans) a.insert(k);
            ans.clear();
            for(auto k:a) ans.push_back(k);
            return ans;
        }
    };