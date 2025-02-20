/*
 * @lc app=leetcode.cn id=1260 lang=cpp
 *
 * [1260] 二维网格迁移
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int column = grid[0].size();
        int size = row * column;
        vector<vector<int>> res(row, vector<int>(column, 0));
        int n = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                int new_k = (k + n) % size;
                int new_i = new_k / column;
                int new_j = new_k % column;
                res[new_i][new_j] = grid[i][j];
                n++;
            }
        }
        return res;
    }
};
// @lc code=end

