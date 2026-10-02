/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int i;
        for(i=0;(long long)i*i<=x;i++);
        return i-1;
    }
};
// @lc code=end

