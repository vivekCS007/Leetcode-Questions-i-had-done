// 1980. Find Unique Binary String

class Solution {
    public:
        string toBinary(int num) {
            if (num == 0) return "0";
            std::string binary = "";
            while (num > 0) {
                binary = std::to_string(num % 2) + binary; 
                num /= 2;
            }
            return binary;
        }
        string findDifferentBinaryString(vector<string>& nums) {
            int n=nums.size();
            for (int i=0;i<17;i++){
                string a=toBinary(i);
                if(a.length()<nums[0].length()){
                    int x=nums[0].length()-a.length();
                    for (int j=0;j<x;j++) a='0'+a;
                }
                int no=1;
                for (string s:nums){
                    if(a==s){
                        no=0;
                        break;
                    }
                }
                if(no) return a;
            }
            return "";
    
        }
    };