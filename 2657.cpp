// 2657. Find the Prefix Common Array of Two Arrays

class Solution {
    public:
        vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
            int n=A.size();
            vector<int> a(n+1,0);
            // for(auto i:a) cout<<i;
            vector<int> b(n+1,0);
            vector<int> ans;
            for(int i=0;i<n;i++){
                a[A[i]]=1;
                b[B[i]]=1;
                int c=0;
                
                for(int j=0;j<n+1;j++) if(a[j] && b[j]) c++;
                ans.push_back(c);
            }
            return ans;
        }
    };