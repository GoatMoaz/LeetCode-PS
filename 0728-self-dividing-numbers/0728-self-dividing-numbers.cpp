class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left ; i<=right ; i++){
            bool flag=true;
            int copy=i;
            while(copy>0){
                if(copy%10==0){
                    flag=false;
                    break;
                }
                else if(i%(copy%10)!=0){
                    flag = false;
                    break;
                }
                copy/=10;
            }
            if(flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};