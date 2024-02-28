class Solution {
public:
    int lengthOfLastWord(string s) {
        bool c=false;
        int counter=0;
        for (int i = s.size()-1; i >= 0; --i) {
            if(s[i]!=' ')
                c=true,counter++;
            else if(c)
                break;
        }
        return counter;
    }
};
