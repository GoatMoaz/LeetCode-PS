class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int counter=0;
        for(int i=0 ; i<s.size() ; i++){
            if(counter<spaces.size() && i==spaces[counter])
                ans.push_back(' '), counter++;
            ans.push_back(s[i]);
        }
        return ans;
    }
};