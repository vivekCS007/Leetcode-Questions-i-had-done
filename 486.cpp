// 486. Predict the Winner

class Solution {
    public:
    int t[1000][1000];
        int solve(vector<int> nums,int i,int j){
     
            if(i>j) return 0;
            if(i==j) return nums[i];
                   if(t[i][j]!=-1) return t[i][j];
            int score=max(nums[i]+min(solve(nums,i+2,j),solve(nums,i+1,j-1)),nums[j]+min(solve(nums,i+1,j-1),solve(nums,i,j-2)));
            return t[i][j]=score;
        }
        bool predictTheWinner(vector<int>& nums) {
            // long long a=0, b=0;
            memset(t,-1,sizeof(t));
            long long x=solve(nums,0,nums.size()-1);
            long long y=accumulate(nums.begin(),nums.end(),0LL);
            y-=x;
            return x>=y;
        }
    };