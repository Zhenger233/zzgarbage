/*
 * @lc app=leetcode.cn id=507 lang=cpp
 *
 * [507] 完美数
 *
 * https://leetcode-cn.com/problems/perfect-number/description/
 *
 * algorithms
 * Easy (38.37%)
 * Likes:    76
 * Dislikes: 0
 * Total Accepted:    19.7K
 * Total Submissions: 50.9K
 * Testcase Example:  '28'
 *
 * 对于一个 正整数，如果它和除了它自身以外的所有 正因子 之和相等，我们称它为 「完美数」。
 * 
 * 给定一个 整数 n， 如果是完美数，返回 true，否则返回 false
 * 
 * 
 * 
 * 示例 1：
 * 
 * 输入：28
 * 输出：True
 * 解释：28 = 1 + 2 + 4 + 7 + 14
 * 1, 2, 4, 7, 和 14 是 28 的所有正因子。
 * 
 * 示例 2：
 * 
 * 输入：num = 6
 * 输出：true
 * 
 * 
 * 示例 3：
 * 
 * 输入：num = 496
 * 输出：true
 * 
 * 
 * 示例 4：
 * 
 * 输入：num = 8128
 * 输出：true
 * 
 * 
 * 示例 5：
 * 
 * 输入：num = 2
 * 输出：false
 * 
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 <= num <= 10^8
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        // int sum=0;
        // for(int i=1;i<=num/2;i++){
        //     if(num%i==0)sum+=i;
        // }
        // return sum==num;
        return num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336;
    }
};
// @lc code=end

