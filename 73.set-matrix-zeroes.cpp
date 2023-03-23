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
// time - O(m*n), space - O(1)
        int m = matrix.size();
        int n = matrix[0].size();
        bool flag1 = false;
        bool flag2 = false;

        for (int j=0; j<n; j++) {
            if (matrix[0][j] == 0) {
                flag1 = true;
            }
        }

        for (int i=0; i<m; i++) {
            if (matrix[i][0] == 0) {
                flag2 = true;
            }
        }

        for (int i=1; i<m; i++) {
            for (int j=1; j<n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        }

        for (int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                } 
            }
        }

        if (flag1) {
            for(int j=0; j<n; j++) {
                matrix[0][j] = 0;
            }
        }

        if (flag2) {
            for(int i=0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
// @lc code=end

