#include <bits/stdc++.h>
template<class t>
std::istream &operator>>(std::istream &input, std::vector<t> &info) {
    for (t &it: info) input >> it;
    return input;
}

template<typename t>
std::ostream &operator<<(std::ostream &output, const std::vector<t> &info) {
    int n = info.size();
    for (const t &it: info) output << it << (--n != 0 ? " " : "");
    return output;
}
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool counter=0;
        int nine=0;
        if(digits.size()==1 && digits[0]<9){
            digits[0]++;
            return digits;
        }
        else if (digits.size()==1)
            return {1,0};
        for (int i = digits.size()-1; i > 0 ; --i) {
            if(digits[i]<9){
                digits[i]++;
                counter=0;
                return digits;
            }
            else {
                counter = 1;
                nine++;
                digits[i]=0;
            }
        }
        if(digits[0]==9)
            nine++;
        if(nine==digits.size()) {
            vector<int> zero(digits.size() + 1, 0);
            zero[0] = 1;
            return zero;
        }
        if(counter)
            digits[0]++;
        return digits;
    }
};