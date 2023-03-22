/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */
// @lc code=start
class Solution {
public:
        // O(m+n) space O(mn) time
        // vector<int>bufferX(matrix.size(), 0);
        // vector<int>bufferY(matrix[0].size(), 0);
        // for(int i=0; i<matrix.size(); i++) {
        //     for (int j=0; j<matrix[i].size(); j++) {
        //         if (matrix[i][j] == 0) {
        //             bufferX[i] = 1;
        //             bufferY[j] = 1;
        //         }
        //     }
        // }

        // for(int i=0; i<matrix.size(); i++) {
        //     for (int j=0; j<matrix[i].size(); j++) {
        //         if (bufferX[i] == 1 || bufferY[j] == 1) {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    bufferX[i] = 1;
                    bufferY[j] = 1;
                }
            }
        }

        for(int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                if (bufferX[i] == 1 || bufferY[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// @lc code=end

