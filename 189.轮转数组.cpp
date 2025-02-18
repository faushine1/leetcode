/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */

// @lc code=start
class Solution {
public:
    void reverse(vector<int>& nums, int left, int right) {
        if (left < 0 || right > nums.size() - 1) return;
        while (left != right && left + 1 != right) {
            std::swap(nums[left], nums[right]);
            left++;
            right--;
        }
        if (left != right) {
            std::swap(nums[left], nums[right]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        // When the number of rotations k equals the length of the array, it is equivalent to no rotation at all, as each element will return to its original position.
        k = k % nums.size();
        if (k == 0) return;
        int left = 0;
        int right = nums.size() - 1;
        // reverse the whole list
        reverse(nums, left, right);
        // reverse first kth eletments
        left = 0;
        right = k - 1;
        reverse(nums, left, right);
        // reverse the rest of elements
        left = k;
        right = nums.size() - 1;
        reverse(nums, left, right);
    }
};
// @lc code=end

