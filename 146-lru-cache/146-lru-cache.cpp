class LRUCache {
public:
    list<pair<int,int>>lst;
    unordered_map<int,list<pair<int,int>>::iterator>table;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(table.find(key)!=table.end()){
            auto node=table[key];
            int val=node->second;
            lst.erase(node);
            table.erase(key);
            lst.push_front({key,val});
            table[key]=lst.begin();
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(table.find(key)!=table.end()){
            auto node=table[key];
            lst.erase(node);
            table.erase(key);
        }
        if(table.size()==cap){
            auto node=lst.end();
            node--;
            int k=node->first;
            table.erase(k);
            lst.pop_back();
        }
        lst.push_front({key,value});
        table[key]=lst.begin();
    }
};
