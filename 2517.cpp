// 2517. Maximum Tastiness of Candy Basket

class Solution {
    public:
        int maximumTastiness(vector<int>& price, int k) {
            sort(price.begin(),price.end());
            // if(k==2)
            int l=0;
            int h=*max_element(price.begin(),price.end())-*min_element(price.begin(),price.end());
            if(k==2) return h;
            int m=l+(h-l)/2;
            int ans=0;
            while(l<h){
                int m=l+(h-l)/2;
                int x=1;
                int a=price[0];
                for(int i=0;i<price.size();i++){
                    if(price[i]-a>=m){
                        x++;
                        a=price[i];
                    }
                }
                if(x<k){
                    // ans=m;
                    h=m;
                }
                else {
                    ans=m;
                    l=m+1;
                }
            }
            return ans;
        }
    };