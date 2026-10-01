/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size()-1;
        int f=0;
        int m=(l+f)/2;
        while(l>=f){
            if(target<nums[m]){
                l=m-1;
                m=(l+f)/2;
            }
            else if(target>nums[m]){
                f=m+1;
                m=(l+f)/2;
            }
            else return m;
        }
        return f;
    }
};
// @lc code=end

