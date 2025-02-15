// 2698. Find the Punishment Number of an Integer

class Solution {
public:
    int punishmentNumber(int n) {
        vector<int> arr={1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,657,675,703,756,792,909,918,945,964,990,991,999,1000};
        long long ans=0;
        int i=0;
        while(i<arr.size() && n>=arr[i]){
            ans+=arr[i]*arr[i];
            i++;
        }
        return ans;
    }
};