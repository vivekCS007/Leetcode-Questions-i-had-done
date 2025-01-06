// 1769. Minimum Number of Operations to Move All Balls to Each Box

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ball;
        int n=boxes.length();
        for (int i=0;i<n;i++){
            if (boxes[i]=='1') ball.push_back(i);
        }
        vector<int> ans(n,0);
        for (int i=0;i<n;i++){
            for(int j=0;j<ball.size();j++) ans[i]+=abs(i-ball[j])
        }
        return ans;
    }
};