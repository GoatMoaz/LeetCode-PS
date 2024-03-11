class MyHashMap {
private:
    int Map[1000001];
public:
    MyHashMap() {
        fill(Map,Map+1000001,-1);
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