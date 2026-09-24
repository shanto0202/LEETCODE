/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int ck=x;
        long long r=0;
        while(x>0){
            r=r*10+x%10;
            x/=10;
        }
        if(ck==r) return true;
        else return false;
    }
};
// @lc code=end

