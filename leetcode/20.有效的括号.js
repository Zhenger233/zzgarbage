/*
 * @lc app=leetcode.cn id=20 lang=javascript
 *
 * [20] 有效的括号
 */

// @lc code=start
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    let p = /(\[])|({})|(\(\))/g;
    while (p.test(s)) {
        s=s.replace(p, '');
    }
    return s == '';
};
console.log(isValid(''));
// @lc code=end

