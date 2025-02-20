/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0; // points to the first 0
        int q = 0; // points to the first valid element
        while (p < nums.size() && q < nums.size()) {
            while (p < nums.size() && nums[p] != 0) {
                p++;
            }
            q = p;
            while (q < nums.size() && nums[q] == 0) {
                q++;
            }
            if (p < nums.size() && q < nums.size() && nums[p] == 0 && nums[q] != 0) {
                std::swap(nums[p], nums[q]);
            }
            p++;
            q++;
        }
    }
};
// @lc code=end

