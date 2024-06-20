class Solution {
public:
    int maximum69Number (int num) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        bool flag = true;
        string copy = to_string(num);
        for (int i = 0; i < copy.size(); ++i) {
            if (copy[i] == '6' && flag)
                copy[i] = '9', flag = false;
        }
        int ans = stoi(copy);
        return ans;
    }
};