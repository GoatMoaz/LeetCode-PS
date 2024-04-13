#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int maximumSwap(int num) {
        GOAT
        string s = to_string(num);
        vector<int> indx(10,-1);
        for (int i = 0; i < s.size(); ++i) {
            indx[s[i]-'0']=i;
        }
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 9; j > s[i]-'0'; --j) {
                if(indx[j]>i){
                    swap(s[i],s[indx[j]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};