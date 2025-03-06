// 239. Sliding Window Maximum

class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& A, int B) {
            vector<int> ans;
            deque<int> dq;
            int n=A.size();
            for(int i=0;i<n;i++){
                if(!dq.empty() && dq.front()==i-B) dq.pop_front();
                while(!dq.empty() && A[dq.back()]<A[i]) dq.pop_back();
                dq.push_back(i);
                if(i>=B-1) ans.push_back(A[dq.front()]);
            }
            return ans;
        }
    };