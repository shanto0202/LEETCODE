/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp=nums1;
        if(m==0){
            nums1=nums2;
            return;
        }
        if(n==0) return;

        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(temp[i]<=nums2[j]){
                nums1[k]=temp[i];
                i++;
            }
            else{
                nums1[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            nums1[k]=temp[i];
            k++;
            i++;
        }

            while(j<n){
            nums1[k]=nums2[j];
            k++;
            j++;
        }
        return;
    }
};
// @lc code=end

