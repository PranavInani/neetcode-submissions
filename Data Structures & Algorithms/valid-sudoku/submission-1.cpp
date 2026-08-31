class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> check(10, 0);

        for (int i = 0; i < 9; i++) {
            // horizontally
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '0';

                if (check[num]) return false;

                check[num] = 1;
            }

            fill(check.begin(), check.end(), 0);

            // vertically
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') continue;

                int num = board[j][i] - '0';

                if (check[num]) return false;

                check[num] = 1;
            }

            fill(check.begin(), check.end(), 0);

            // sub boxes
            int l = (i / 3) * 3;
            int m = (i % 3) * 3;
            for (int x = l; x < l + 3; x++) {
                for (int y = m; y < m + 3; y++) {
                    if (board[x][y] == '.') continue;

                    int num = board[x][y] - '0';

                    if (check[num]) return false;

                    check[num] = 1;
                }
            }
            fill(check.begin(), check.end(), 0);
        }

        return true;
    }
};

// 0 - 11
// 1 - 14
// 2 - 17
// 3 - 41
// 4 - 44
// 5 - 47
// 6 - 71
// 7 - 74
// 8 - 77

// /3 + 1, %3 *3  + 1