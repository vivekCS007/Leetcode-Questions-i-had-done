// 477. Total Hamming Distance

// Way 1
class Solution {
    public:
        int totalHammingDistance(vector<int>& nums) {
            int n=nums.size();
            int ans=0;
            for (int i=0;i<n;i++) {
                for (int j=i+1;j<n;j++) {
                    ans+=hammingDistance(nums[i],nums[j]);
                }
            }
            return ans;
        }
        int hammingDistance(int x, int y){
            int xorValue=x^y;
            int distance=__builtin_popcount(xorValue);
            // while (
            // return distance;
            return distance;
    
        }
    };

    // way2
    class Solution {
        public:
            int totalHammingDistance(vector<int>& nums) {
                int n=nums.size(), ans=0;
                for(int i=0;i<32;i++){
                    int count=0;
                    for(int k=0;k<n;k++){
                        count += (nums[k]>>i)&1;
                    }
                    ans += count*(n-count);
                }
                return ans;
            }
        };