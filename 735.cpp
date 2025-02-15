// 735. Asteroid Collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        st.push(asteroids[0]);
        for (int i=1;i<n;i++){
            if (asteroids[i]>0) st.push(asteroids[i]);
            else{
                while(!st.empty() && abs(st.top())<abs(asteroids[i]) && st.top()*asteroids[i]<0) st.pop();
                if (st.empty() || st.top()*asteroids[i]>0) st.push(asteroids[i]);
                else if (st.top()==abs(asteroids[i])) st.pop();
                
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};