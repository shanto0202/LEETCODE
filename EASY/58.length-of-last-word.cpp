/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && count>0) return count;
            if(s[i]==' ')
            continue;
            count++;
        }
        return count;
    }
};
// @lc code=end

