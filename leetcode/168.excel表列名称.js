/*
 * @lc app=leetcode.cn id=168 lang=javascript
 *
 * [168] Excel表列名称
 *
 * https://leetcode-cn.com/problems/excel-sheet-column-title/description/
 *
 * algorithms
 * Easy (38.31%)
 * Likes:    265
 * Dislikes: 0
 * Total Accepted:    34.8K
 * Total Submissions: 90.8K
 * Testcase Example:  '1'
 *
 * 给定一个正整数，返回它在 Excel 表中相对应的列名称。
 * 
 * 例如，
 * 
 * ⁠   1 -> A
 * ⁠   2 -> B
 * ⁠   3 -> C
 * ⁠   ...
 * ⁠   26 -> Z
 * ⁠   27 -> AA
 * ⁠   28 -> AB 
 * ⁠   ...
 * 
 * 
 * 示例 1:
 * 
 * 输入: 1
 * 输出: "A"
 * 
 * 
 * 示例 2:
 * 
 * 输入: 28
 * 输出: "AB"
 * 
 * 
 * 示例 3:
 * 
 * 输入: 701
 * 输出: "ZY"
 * 
 * 
 */

// @lc code=start
/**
 * @param {number} n
 * @return {string}
 */
var convertToTitle = function(n) {
    // console.log(n);
    //if(n<=26)return String.fromCharCode(64+n);
    var ans=[];
    while(n){
        ans.unshift(n%27);
        n=parseInt(n/27);
    }
    // console.log(ans);
    return ans;
};
convertToTitle(1);
convertToTitle(26);
convertToTitle(27);
convertToTitle(52);
convertToTitle(676);
convertToTitle(701);
// @lc code=end

