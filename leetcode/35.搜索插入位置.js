/*
 * @lc app=leetcode.cn id=35 lang=javascript
 *
 * [35] 搜索插入位置
 *
 * https://leetcode-cn.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (46.63%)
 * Likes:    635
 * Dislikes: 0
 * Total Accepted:    224.3K
 * Total Submissions: 481K
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 * 
 * 你可以假设数组中无重复元素。
 * 
 * 示例 1:
 * 
 * 输入: [1,3,5,6], 5
 * 输出: 2
 * 
 * 
 * 示例 2:
 * 
 * 输入: [1,3,5,6], 2
 * 输出: 1
 * 
 * 
 * 示例 3:
 * 
 * 输入: [1,3,5,6], 7
 * 输出: 4
 * 
 * 
 * 示例 4:
 * 
 * 输入: [1,3,5,6], 0
 * 输出: 0
 * 
 * 
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let l=0,r=nums.length-1,m=parseInt((l+r)/2);
    while(l<r){
        if(nums[m]==target){
            return m;
        }else if(nums[m]<target){
            l=m+1;
        }else r=m-1;
        m=parseInt((l+r)/2);
        console.log(l,r,m);
    }
    if(nums[m]<target)return m+1;
    return m;
};
console.log(searchInsert([1,3,5,6],4));
// @lc code=end

