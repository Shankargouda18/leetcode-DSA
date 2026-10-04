class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sub[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                
                int num = board[i][j] - '1'; // Convert '1'-'9' to index 0-8
                int k = (i / 3) * 3 + (j / 3); // 3x3 sub-box index

                if (row[i][num] || col[j][num] || sub[k][num]) {
                    return false; // Duplicate found
                }

                row[i][num] = true;
                col[j][num] = true;
                sub[k][num] = true;
            }
        }
        return true;
    }
};
