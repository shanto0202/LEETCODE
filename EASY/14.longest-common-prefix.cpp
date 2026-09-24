/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            bool match= true;
                for(int j=1;j<strs.size();j++){
                    if(c!=strs[j][i]){
                    match=false;
                    break;
                    }

                }
            if(!match)  break;
            res+=c;
        }
        return res;
    }
};
// @lc code=end

