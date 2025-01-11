// 1011. Capacity To Ship Packages Within D Days
class Solution {
public:
    int sum(vector<int> a){
        int s=0;
        for (int i:a) s+=i;
        return s;
    }
    int day(vector<int> a,int b){
        int x=1;
        int s=0;
        for (int i:a){
            if (s+i>b){ 
                s=i;
                x++;
            }
            else s+=i;
        }
        return x;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*(max_element(weights.begin(), weights.end()));
        int r=sum(weights);
        while(l<r){
            int mid=l+(r-l)/2;
            if (days>=day(weights,mid)) r=mid;
            else l=mid+1;
        }
        return l;
    }
};