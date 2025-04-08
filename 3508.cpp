// 3508. Implement Router


class Router {
    public:
        int x;
        queue<vector<int>> q;
        unordered_map<string, int> mp;
        unordered_map<int, vector<int>> dmap;
        
        Router(int m) {
            x=m;
        }
        string crea(int source, int destination, int timestamp) {
            string s;
            s=s+to_string(source)+","+to_string(destination)+","+to_string(timestamp);
            return s;
        }
        bool addPacket(int source, int destination, int timestamp) {
    
            vector<int> v={source,destination,timestamp};
    
            string vi=crea(v[0],v[1],v[2]);
            if(mp[vi]>=1) return false;
            mp[vi]++;
    
            
            if(x<=q.size()) {
                if(!q.empty()){
                    vector<int> o=q.front();
                    q.pop();
           
                    auto& t=dmap[o[1]];
                    t.erase(lower_bound(t.begin(),t.end(),o[2]));
                    mp[crea(o[0],o[1],o[2])]--;
                }
            }
            q.push(v);
            auto& t=dmap[destination];
            t.insert(upper_bound(t.begin(),t.end(),timestamp),timestamp);
    
            return true;
        }
        
        vector<int> forwardPacket() {
            if(q.empty()) return {};
            vector<int> a=q.front();
            string ai=crea(a[0],a[1],a[2]);
            mp[ai]--;
            q.pop();
            auto& t=dmap[a[1]];
            t.erase(lower_bound(t.begin(),t.end(),a[2]));        
            return a;
        }
        
        int getCount(int destination, int startTime, int endTime) {
            int count=0;
    
            auto& t=dmap[destination];
            auto l=lower_bound(t.begin(),t.end(),startTime);
            auto u=upper_bound(t.begin(),t.end(),endTime);
            
            count=u-l; 
            return count;
    
        }
    };
    
    /**
     * Your Router object will be instantiated and called as such:
     * Router* obj = new Router(memoryLimit);
     * bool param_1 = obj->addPacket(source,destination,timestamp);
     * vector<int> param_2 = obj->forwardPacket();
     * int param_3 = obj->getCount(destination,startTime,endTime);
     */