#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        string vowels;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='a' ||s[i]=='i' ||s[i]=='u' ||s[i]=='o' ||s[i]=='e' || s[i]=='A' ||s[i]=='I' ||s[i]=='U' ||s[i]=='O' ||s[i]=='E')
                vowels.push_back(s[i]);
        }
        int size=vowels.size()-1;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='a' ||s[i]=='i' ||s[i]=='u' ||s[i]=='o' ||s[i]=='e' || s[i]=='A' ||s[i]=='I' ||s[i]=='U' ||s[i]=='O' ||s[i]=='E')
                s[i]=vowels[size],size--;
        }
        return s;
    }
};