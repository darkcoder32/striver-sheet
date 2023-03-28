/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // approach 1
        // vector<vector<int>>ans;
        // vector<int>buf;
        // buf.push_back(1);
        // ans.push_back(buf);
        // // return ans;
        // for(int i=1; i<numRows; i++) {
        //     vector<int>buf1;
        //     for(int j=0; j<=i; j++) {
        //         if(j-1 < 0) {
        //             buf1.push_back(ans[i-1][j]);
        //         } else if (j == ans[i-1].size()) {
        //             buf1.push_back(ans[i-1][j-1]);
        //         } else {
        //             buf1.push_back(ans[i-1][j] + ans[i-1][j-1]);
        //         }
        //     }
        //     ans.push_back(buf1);
        // }
        // return ans;

        // approach 2
        vector<vector<int>>ans;

        for(int i=0; i<numRows; i++) {
            vector<int>v(i+1, 1);
            if (i > 1) {
                for (int j=1; j<i; j++) {
                    v[j] = ans[i-1][j] + ans[i-1][j-1];
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
// @lc code=end

