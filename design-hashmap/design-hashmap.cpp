#include <bits/stdc++.h>
using namespace std;
class MyHashMap {
private:
    vector<int> Map;
public:
    MyHashMap() {
        Map.resize(1000001,-1);
    }

    void put(int key, int value) {
        Map[key]=value;
    }

    int get(int key) {
        return Map[key];
    }
    void remove(int key) {
        Map[key]=-1;
    }
};
