// 3309. Maximum Possible Number by Binary Concatenation

class Solution {
public:
    std::string toBinary(int n) {
        if (n == 0) return "0"; 
        std::string binary = "";
    
        while (n > 0) {
            binary += (n % 2 == 0 ? '0' : '1');
            n /= 2;
        }

        std::reverse(binary.begin(), binary.end()); 
        return binary;
    }
    int binaryToInt(const std::string& binary) {
        int result = 0;
        int length = binary.size();

        for (int i = 0; i < length; ++i) {
            if (binary[i] == '1') {
                result += std::pow(2, length - i - 1);  
            }
        }

        return result;
    }
    int maxGoodNumber(vector<int>& nums) {
        string a=toBinary(nums[0]);
        string b=toBinary(nums[1]);
        string c=toBinary(nums[2]);
        string ans=a+b+c;
        ans=max(ans,a+c+b);
        ans=max(ans,b+a+c);
        ans=max(ans,b+c+a);
        ans=max(ans,c+a+b);
        ans=max(ans,c+b+a);
        
        return binaryToInt(ans);
    }
};