// 42. Trapping Rain Water
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=1;
        int r=n-1;
        int lm=height[0];
        int rm =height[r];
        int water=0;
        while(l<=r){
            if (lm<=rm){
                if (height[l]<lm){
                    water+=lm-height[l];
                }
                else lm=height[l];
                l++;
            }
            else {
                if (height[r]<rm){
                    water+=rm-height[r];
                }
                else rm=height[r];
                r--;
            }
        }
        return water;
    }
};