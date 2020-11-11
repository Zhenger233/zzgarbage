/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 *
 * https://leetcode-cn.com/problems/word-pattern/description/
 *
 * algorithms
 * Easy (43.55%)
 * Likes:    208
 * Dislikes: 0
 * Total Accepted:    34.2K
 * Total Submissions: 78.1K
 * Testcase Example:  '"abba"\n"dog cat cat dog"'
 *
 * 给定一种规律 pattern 和一个字符串 str ，判断 str 是否遵循相同的规律。
 * 
 * 这里的 遵循 指完全匹配，例如， pattern 里的每个字母和字符串 str 中的每个非空单词之间存在着双向连接的对应规律。
 * 
 * 示例1:
 * 
 * 输入: pattern = "abba", str = "dog cat cat dog"
 * 输出: true
 * 
 * 示例 2:
 * 
 * 输入:pattern = "abba", str = "dog cat cat fish"
 * 输出: false
 * 
 * 示例 3:
 * 
 * 输入: pattern = "aaaa", str = "dog cat cat dog"
 * 输出: false
 * 
 * 示例 4:
 * 
 * 输入: pattern = "abba", str = "dog dog dog dog"
 * 输出: false
 * 
 * 说明:
 * 你可以假设 pattern 只包含小写字母， str 包含了由单个空格分隔的小写字母。    
 * 
 */
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;
using namespace boost;
// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        s+=' ';
        for (int i = 0, j = 0; j < s.size();) {
            if (s[j] == ' ') {
                v.push_back(s.substr(i, j-i));
                i = j+1;
            }
            j++;
        }
        if(v.size()!=pattern.size())return false;
        map<char,vector<int>>m;
        for (size_t i = 0; i < pattern.size(); i++)
        {
            m[pattern[i]].push_back(i);
        }
        set<string>ss;
        for(auto p:m){
            auto tempv = p.second;
            ss.insert(v[tempv[0]]);
            for (size_t i = 0; i < tempv.size(); i++)
            {
                if (v[tempv[i]] != v[tempv[0]])return false;
            }
        }
        if(ss.size()!=m.size())return false;
        return true;
    }
};
// @lc code=end

