class Solution {
public:
    int maximumLength(string s) {
        map<string, int> mp;
        int ans=-1, start=0;
        for(int i=0; i<s.length() ; i++){
            if(i==s.size()-1 || s[i]!=s[i+1]){
                int len = i-start+1;
                string sub = s.substr(start , len);
                start=i+1;
                mp[sub]++;
                if(len >= 2)
                    mp[sub.substr(0,len-1)]+=2;
                if(len >= 3)
                    mp[sub.substr(0,len-2)]+=3;

            }
        } 
        
        for(auto& i : mp){
            int len=i.first.length();
            if(i.second>=3)
                ans=max(ans,len);
        }
        
        return ans;
        
    }
};