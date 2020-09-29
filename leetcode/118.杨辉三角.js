/*
 * @lc app=leetcode.cn id=118 lang=javascript
 *
 * [118] 杨辉三角
 *
 * https://leetcode-cn.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (67.28%)
 * Likes:    348
 * Dislikes: 0
 * Total Accepted:    104.4K
 * Total Submissions: 155K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
 * 
 * 
 * 
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 
 * 示例:
 * 
 * 输入: 5
 * 输出:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 * 
 */

// @lc code=start
/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    var ans=[];
    for(var i=0;i<numRows;i++){
        var thisLayer=[1];
        for(var j=1;j<i;j++){
            thisLayer.push(ans[i-1][j-1]+ans[i-1][j]);
        }
        if(i)thisLayer.push(1);
        ans.push(thisLayer);
    }
    return ans;
};
console.log(generate(10));
// @lc code=end

