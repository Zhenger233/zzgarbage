/*
 * @lc app=leetcode.cn id=119 lang=javascript
 *
 * [119] 杨辉三角 II
 *
 * https://leetcode-cn.com/problems/pascals-triangle-ii/description/
 *
 * algorithms
 * Easy (61.85%)
 * Likes:    178
 * Dislikes: 0
 * Total Accepted:    69.2K
 * Total Submissions: 111.9K
 * Testcase Example:  '3'
 *
 * 给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
 * 
 * 
 * 
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 
 * 示例:
 * 
 * 输入: 3
 * 输出: [1,3,3,1]
 * 
 * 
 * 进阶：
 * 
 * 你可以优化你的算法到 O(k) 空间复杂度吗？
 * 
 */

// @lc code=start
/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    if(rowIndex==0)return [1];
    if(rowIndex==1)return [1,1];
    var a=[1,1];
    for(var i=2;i<=rowIndex;i++){
        ans=[1];
        for(var j=1;j<a.length;j++)ans.push(a[j]+a[j-1])
        ans.push(1);
        a=ans;
    }
    return ans;
};
console.log(getRow(3));
// @lc code=end

