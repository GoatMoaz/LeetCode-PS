#include <bits/stdc++.h>
using namespace std;
class MyHashSet {
private:
    vector<bool> Set;
public:
    MyHashSet() {
        Set.resize(1000001,false);
    }

    void add(int key) {
        Set[key]=true;
    }

    void remove(int key) {
        if(contains(key))
            Set[key]=false;
    }

    bool contains(int key) {
        return Set[key];
    }
};
