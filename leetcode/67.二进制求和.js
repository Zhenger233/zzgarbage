/*
 * @lc app=leetcode.cn id=67 lang=javascript
 *
 * [67] 二进制求和
 *
 * https://leetcode-cn.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (54.42%)
 * Likes:    465
 * Dislikes: 0
 * Total Accepted:    124.5K
 * Total Submissions: 228.9K
 * Testcase Example:  '"11"\n"1"'
 *
 * 给你两个二进制字符串，返回它们的和（用二进制表示）。
 * 
 * 输入为 非空 字符串且只包含数字 1 和 0。
 * 
 * 
 * 
 * 示例 1:
 * 
 * 输入: a = "11", b = "1"
 * 输出: "100"
 * 
 * 示例 2:
 * 
 * 输入: a = "1010", b = "1011"
 * 输出: "10101"
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 每个字符串仅由字符 '0' 或 '1' 组成。
 * 1 <= a.length, b.length <= 10^4
 * 字符串如果不是 "0" ，就都不含前导零。
 * 
 * 
 */

// @lc code=start
/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
    var la=a.length,lb=b.length;
    var i=la-1,j=lb-1,ans=[],c=0;
    for(;i>=0||j>=0;i--,j--){
        t1=0,t2=0;
        if(i>=0)t1=a[i]*1;
        if(j>=0)t2=b[j]*1;
        ans.unshift(t1^t2^c);
        c=t1&t2|(t1|t2)&c;
        // console.log('t1=%d,t2=%d,ans=%s,c=%d',t1,t2,ans,c);
    }
    if(c==1)ans.unshift(1);
    return ans.join("");
};
// console.log(addBinary('1111','1111'));
// @lc code=end

