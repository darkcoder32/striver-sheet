/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>buf;
        buf.push_back(1);
        ans.push_back(buf);
        // return ans;
        for(int i=1; i<numRows; i++) {
            vector<int>buf1;
            for(int j=0; j<i; j++) {
                if(j-1 < 0) {
                    buf1.push_back(ans[i-1][j]);
                } else {
                    buf1.push_back(ans[i-1][j] + ans[i-1][j-1]);
                }
            }
            ans.push_back(buf1);
        }
        return ans;
    }
};
// @lc code=end

