/*
 * @lc app=leetcode.cn id=69 lang=javascript
 *
 * [69] x 的平方根
 *
 * https://leetcode-cn.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (38.85%)
 * Likes:    496
 * Dislikes: 0
 * Total Accepted:    201.1K
 * Total Submissions: 517.5K
 * Testcase Example:  '4'
 *
 * 实现 int sqrt(int x) 函数。
 * 
 * 计算并返回 x 的平方根，其中 x 是非负整数。
 * 
 * 由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
 * 
 * 示例 1:
 * 
 * 输入: 4
 * 输出: 2
 * 
 * 
 * 示例 2:
 * 
 * 输入: 8
 * 输出: 2
 * 说明: 8 的平方根是 2.82842..., 
 * 由于返回类型是整数，小数部分将被舍去。
 * 
 * 
 */

// @lc code=start
/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    var l=0,r=x,m=0;
    while(l<=r){
        m=Math.floor((l+r)/2);
        var t=Math.pow(m,2);
        console.log(m,t);
        if(t<=x&&Math.pow(m+1,2)>x)return m;
        else if(t<x)l=m+1;
        else if(t>x)r=m-1;
    }
    return m;
};
 console.log(mySqrt(1));
// @lc code=end

