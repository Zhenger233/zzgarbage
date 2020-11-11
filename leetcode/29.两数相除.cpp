/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 *
 * https://leetcode-cn.com/problems/divide-two-integers/description/
 *
 * algorithms
 * Medium (20.13%)
 * Likes:    453
 * Dislikes: 0
 * Total Accepted:    68.3K
 * Total Submissions: 338.6K
 * Testcase Example:  '10\n3'
 *
 * 给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。
 * 
 * 返回被除数 dividend 除以除数 divisor 得到的商。
 * 
 * 整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) =
 * -2
 * 
 * 
 * 
 * 示例 1:
 * 
 * 输入: dividend = 10, divisor = 3
 * 输出: 3
 * 解释: 10/3 = truncate(3.33333..) = truncate(3) = 3
 * 
 * 示例 2:
 * 
 * 输入: dividend = 7, divisor = -3
 * 输出: -2
 * 解释: 7/-3 = truncate(-2.33333..) = -2
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 被除数和除数均为 32 位有符号整数。
 * 除数不为 0。
 * 假设我们的环境只能存储 32 位有符号整数，其数值范围是 [−2^31,  2^31 − 1]。本题中，如果除法结果溢出，则返回 2^31 − 1。
 * 
 * 
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
	int divide(int dividend, int divisor) {
		long long a = dividend, b = divisor, ans = 0;
		int flag = 1;
		if (dividend < 0) { flag = -flag; a = -a; }
		if (divisor < 0) { flag = -flag; b = -b; }
		while (a > 0 && a >= (b << 16)) { a -= (b << 16); ans += (1 << 16); }
		while (a > 0 && a >= (b << 8)) { a -= (b << 8); ans += (1 << 8); }
		while (a > 0 && a >= (b << 4)) { a -= (b << 4); ans += (1 << 4); }
		while (a > 0 && a >= (b << 2)) { a -= (b << 2); ans += (1 << 2); }
		while (a > 0 && a >= b) { 
			a -= b; 
			ans++; }
		if (flag == 1 && ans > INT_MAX)return INT_MAX;
		if (flag == -1 && ans > (1u << 31))return INT_MAX;
		return ans * flag;
	}
};
// @lc code=end

