#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        bool flag=false;
        int count=0;
        for(int i=num.size()-1 ; i>=0 ; i--){
            int first_digit=k%10;
            if(!count){
                if(num[i]+first_digit>9 && i==0){
                    num[i]+=first_digit;
                    num[i]-=10;
                    flag=true;
                }
                else if(num[i]+first_digit<=9){
                    num[i]+=first_digit;
                }
                else{
                    num[i]+=first_digit;
                    num[i]-=10;
                    count=1;
                }
            }
            else{
                if(num[i]+first_digit+count>9 && i==0){
                    num[i]+=first_digit+count;
                    num[i]-=10;
                    flag=true;
                }
                else if(num[i]+first_digit+count<=9){
                    num[i]+=first_digit+count;
                    count=0;
                }
                else{
                     num[i]+=first_digit+count;
                    num[i]-=10;
                }
            }
            k/=10;
        }
        while(flag){
            if(1+k%10<=9){
                ans.push_back(1+k%10);
                flag=false;
            }
            else
                ans.push_back(1+ k%10 - 10);
            k/=10;
        }
        while(k>0){
            ans.push_back(k%10);
            k/=10;
        }
        reverse(ans.begin() , ans.end());
        
        for(int i=0 ; i<num.size() ; i++){
            ans.push_back(num[i]);
        }
        return ans;
    }
};