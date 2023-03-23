/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        vector<int>buf(1, 1);
        ans.push_back(buf);
        for(int i=1; i<numRows; i++) {
            vector<int>buf;
            for(int j=0; j<i+1; j++) {
                if(j-1 < 0) {
                    buf.push_back(ans[i-1][j]);
                } else {
                    buf.push_back(ans[i-1][j] + ans[i-1][j-1]);
                }
            }
            ans.push_back(buf);
        }
        return ans;
    }
};
// @lc code=end

