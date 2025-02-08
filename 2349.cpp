// 2349. Design Number Container System

class NumberContainers {
public:
    unordered_map<int,set<int>> mp;
    unordered_map<int,int> mp2;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if (mp2.find(index)!=mp2.end()){
            int a=mp2[index];
            mp[a].erase(index);
            if (mp[a].empty()) mp.erase(a);
        }
        mp2[index]=number;
        mp[number].insert(index);
    }
    
    int find(int number) {
        if (mp.find(number)==mp.end()) return -1;
        return *mp[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */