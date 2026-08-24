class Solution {
public:
    bool solve(vector<vector<char>>& board, int row, int col) {
        if (row == 9) return true;
        if (col == 9) return solve(board, row + 1, 0);
        if (board[row][col] != '.') return solve(board, row, col + 1);

        for (char num = '1'; num <= '9'; num++) {
            bool valid = true;

            for (int i = 0; i < 9; i++) {
                if (board[row][i] == num || board[i][col] == num) {
                    valid = false;
                    break;
                }
            }

            int r = (row / 3) * 3;
            int c = (col / 3) * 3;

            for (int i = r; i < r + 3 && valid; i++) {
                for (int j = c; j < c + 3; j++) {
                    if (board[i][j] == num) {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid) {
                board[row][col] = num;

                if (solve(board, row, col + 1))
                    return true;

                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};