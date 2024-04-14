#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        GOAT
        int l=0,r=arr.size()-1;
        while(r-l>=k){
            if(abs(arr[l]-x)>abs(arr[r]-x))
                l++;
            else
                r--;
        }
        vector<int> ans(arr.begin()+l , arr.begin()+r+1);
        return ans;
    }
};