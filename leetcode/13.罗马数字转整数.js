/*
 * @lc app=leetcode.cn id=13 lang=javascript
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const v={I:1,V:5,X:10,L:50,C:100,D:500,M:1000};
    let ans=0,l=s.length;
    for(i of s)ans+=v[i];
    for(let i=0;i<l-1;i++)if(v[s[i]]<v[s[i+1]])ans-=2*v[s[i]];
    return ans;
};
// @lc code=end

