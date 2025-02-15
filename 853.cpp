// 853. Car Fleet

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> a;
        int n=position.size();
        for (int i=0;i<n;i++){
            a.push_back({position[i],speed[i]});
        }
        sort(a.begin(),a.end());
        vector<double> time;
        for (auto i:a){
            time.push_back((1.0*(target-i.first))/i.second);
        }
        double x=time[n-1];
        int ans=1;
        for (int i=n-2;i>=0;i--){
            if (time[i]>x){
                ans++;
                x=time[i];
                cout<<x<<endl;
            }
        }
        return ans;
    }
};