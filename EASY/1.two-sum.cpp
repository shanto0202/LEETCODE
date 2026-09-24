/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int nd=target-nums[i];

            if(mp.find(nd)!=mp.end()){
                return{mp[nd],i};
            }
            mp[nums[i]]=i;
        }
        return{};
    }
};
// @lc code=end

