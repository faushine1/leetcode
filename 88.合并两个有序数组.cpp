/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == n && m == 0) return;
        if (m == 0) {
            nums1.assign(nums2.begin(), nums2.end());
            return;
        } else if (n == 0) {
            return;
        }
        int p =  m - 1; // points to the last valid element of nums1
        int q = nums1.size() - 1; //points to the last invalid element of nums1
        int r = n - 1; // points to the last element of nums2
        while (r >= 0) {
            // remember to check if the index is valid when accessing the array
            while (p >= 0 && nums1[p] >= nums2[r]) {
                std::swap(nums1[p], nums1[q]);
                p--;
                q--;
            }
            std::swap(nums1[q], nums2[r]);
            q--;
            r--;
        }
    }
};
// @lc code=end

