/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */
// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = -1;
                    matrix[i][0] = -1;
                }
            }
        }

        for(int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                if (matrix[i][0] == -1 || matrix[0][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// @lc code=end

