/*
 * @lc app=leetcode.cn id=88 lang=javascript
 *
 * [88] 合并两个有序数组
 *
 * https://leetcode-cn.com/problems/merge-sorted-array/description/
 *
 * algorithms
 * Easy (48.59%)
 * Likes:    617
 * Dislikes: 0
 * Total Accepted:    204.7K
 * Total Submissions: 421K
 * Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
 *
 * 给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
 * 
 * 
 * 
 * 说明:
 * 
 * 
 * 初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
 * 你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
 * 
 * 
 * 
 * 
 * 示例:
 * 
 * 输入:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 * 
 * 输出: [1,2,2,3,5,6]
 * 
 */

// @lc code=start
/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let ans=[],i=0,j=0,k=0;
    while(i<m||j<n){
        if(i<m&&j<n)ans[k++]=(nums1[i]<nums2[j]?nums1[i++]:nums2[j++]);
        else if(i>=m)ans[k++]=nums2[j++];
        else if(j>=n)ans[k++]=nums1[i++];
    }
    console.log(ans);
    nums1=ans.concat();
};
ns1=[1,2,3,0,0,0]
ns2=[2,5,6]
n1=3
n2=3
merge(ns1,n1,ns2,n2);
console.log(ns1);
// @lc code=end

