/*
 * @lc app=leetcode.cn id=941 lang=cpp
 *
 * [941] 有效的山脉数组
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool isDecend = false;
        if (arr.size() < 3) return false;
        for (int i = 0; i < arr.size(); i++) {
            if (i == 0) continue;
            if (!isDecend) {
                if (arr[i] < arr[i - 1]) {
                    if (i == 1) return false;
                    isDecend = true;
                } else if (arr[i] > arr[i - 1]) {
                    // do nothing
                } else {
                    return false;
                }
            }
            if (isDecend) {
                if (arr[i] > arr[i - 1] || arr[i] == arr[i - 1]) {
                    return false;
                }
            }
        }
        if (!isDecend) return false;
        return true;
    }
};
// @lc code=end

