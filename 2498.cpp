// 2498. Frog Jump II

class Solution {
    public:
        int maxJump(vector<int>& stones) {
            int ma=0;
            if(stones.size()==2)return stones[1];
            for(int i=2;i<stones.size();i++) ma=max(ma,stones[i]-stones[i-2]);   
            return ma;
        }
    };