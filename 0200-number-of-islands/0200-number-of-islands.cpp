#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
private:
    void dfs(vector<vector<char>>&grid , int i , int j){
        if(i<0 || i==grid.size() || j<0 || j==grid[0].size() || grid[i][j]!='1')
            return;
        
        grid[i][j]='2';
        
        dfs(grid , i+1 , j);
        dfs(grid , i-1 , j);
        dfs(grid , i , j+1);
        dfs(grid , i , j-1);
    }    
public:
    int numIslands(vector<vector<char>>& grid) {
        GOAT
        int ans=0;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[0].size() ; j++){
                if(grid[i][j]=='1'){
                    dfs(grid , i , j);
                    ans++;
                }
            }
        }
        return ans;
    }
};