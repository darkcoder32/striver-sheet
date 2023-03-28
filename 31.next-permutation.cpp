/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:

    void findPermutations(vector<int>&nums, vector<vector<int>>&allPermutations,  vector<int>&permutation, vector<int>&visited) {
        if (permutation.size() == nums.size()) {
            allPermutations.push_back(permutation);
            return;
        }

        for(int i=0; i<nums.size(); i++) {
            if (!visited[i]) {
                permutation.push_back(nums[i]);
                visited[i] = true;
                findPermutations(nums, allPermutations, permutation, visited);
                visited[i] = false;
                permutation.pop_back();
            }
        }
    }

    void nextPermutation(vector<int>& nums) {
        vector<int>duplicate = nums;
        sort(duplicate.begin(), duplicate.end());
        vector<vector<int>>allPermutations;
        vector<int>permutation;
        vector<int>visited(nums.size(), 0);

        findPermutations(duplicate, allPermutations, permutation, visited);
        int r = -1;
        for (int i=0; i<allPermutations.size(); i++) {
            bool flag = true;
            for(int j=0; j<allPermutations[i].size(); j++) {
                if (nums[j] != allPermutations[i][j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                if (i == allPermutations.size() - 1) {
                    r = 0;
                } else {
                    r = i + 1;
                }
            }
        }
        nums = allPermutations[r];
    }
};
// @lc code=end

