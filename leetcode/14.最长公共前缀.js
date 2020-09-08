/*
 * @lc app=leetcode.cn id=14 lang=javascript
 *
 * [14] 最长公共前缀
 */

// @lc code=start
/**
 * @param {string[]} strs
 * @return {string}
 */

var longestCommonPrefix = function(strs) {
    let l=strs.length,ans='';
    for(a=0,i=0;l;i++){
        if(i==l){i=0;c='';a++;ans+=strs[0][a-1]};
        if(a>=strs[i].length)break;
        c=strs[0][a];
        if(strs[i][a]!=c)break;
    }
    return ans;
};
// console.log(longestCommonPrefix(['fla','flag','flqwe']));

// @lc code=end

