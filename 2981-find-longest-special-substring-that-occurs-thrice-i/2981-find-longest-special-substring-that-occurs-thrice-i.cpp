class Solution {
public:
    int maximumLength(string s) {
        map<string, int> sub;
        int ans=-1;
        for(int i=0 ; i<s.size() ; i++){
            for(int j=i+1 ; j<=s.size() ; j++){
                sub[s.substr(i , j-i)]++;
            }
        }
        
        for(auto i=sub.begin() ; i!=sub.end() ; i++){
            bool flag=true;
            for(int j=1 ; j < i->first.size() ; j++){
                if(i->first[j] != i->first[j-1])
                    flag=false;     
            }
            if((i->second >= 3) && flag){
                ans=max(ans , (int)i->first.size());
            }
        }
        
        return ans;
        
    }
};