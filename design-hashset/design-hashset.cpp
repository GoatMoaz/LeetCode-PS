#include <bits/stdc++.h>
using namespace std;
int Set[1000001];
class MyHashSet {
public:
    MyHashSet() {
        for(int i=0 ; i<1000001 ; i++){
            Set[i]=0;
        }
    }

    void add(int key) {
        Set[key]=1;
    }

    void remove(int key) {
        if(contains(key))
            Set[key]=0;
    }

    bool contains(int key) {
        return Set[key]==1;
    }
};