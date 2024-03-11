#define GOAT  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        GOAT
        unordered_map<char, int> mp;
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    if (mp.count(board[i][j]) > 0)
                        return false;
                    mp[board[i][j]]++;
                }
            }
            mp.clear();
        }
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[j][i] != '.') {
                    if (mp.count(board[j][i]) > 0)
                        return false;
                    mp[board[j][i]]++;
                }
            }
            mp.clear();
        }
        for (int col = 0; col < 3; ++col) {
            for (int row = 0; row < 3; ++row) {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        if (board[i+(col*3)][j+(row*3)] != '.') {
                            if (mp.count(board[i+(col*3)][j+(row*3)]) > 0)
                                return false;
                            mp[board[i+(col*3)][j+(row*3)]]++;
                        }
                    }
                }
                mp.clear();
            }
        }
        return true;
    }
};