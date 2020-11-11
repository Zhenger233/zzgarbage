/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 *
 * https://leetcode-cn.com/problems/merge-intervals/description/
 *
 * algorithms
 * Medium (43.01%)
 * Likes:    688
 * Dislikes: 0
 * Total Accepted:    162.6K
 * Total Submissions: 375.3K
 * Testcase Example:  '[[1,3],[2,6],[8,10],[15,18]]'
 *
 * 给出一个区间的集合，请合并所有重叠的区间。
 * 
 * 
 * 
 * 示例 1:
 * 
 * 输入: intervals = [[1,3],[2,6],[8,10],[15,18]]
 * 输出: [[1,6],[8,10],[15,18]]
 * 解释: 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
 * 
 * 
 * 示例 2:
 * 
 * 输入: intervals = [[1,4],[4,5]]
 * 输出: [[1,5]]
 * 解释: 区间 [1,4] 和 [4,5] 可被视为重叠区间。
 * 
 * 注意：输入类型已于2019年4月15日更改。 请重置默认代码定义以获取新方法签名。
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * intervals[i][0] <= intervals[i][1]
 * 
 * 
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
struct node
        {
            bool operator <(const node &n)const{return r<n.l;}
            int l, r;
        }temp;
        set<node> s;
        set<node>::iterator it;

        void insert(node t)
        {
            it = s.find(t);
            if (it == s.end())
                s.insert(t);
            else
            {
                temp = {min(it->l, t.l), max(it->r, t.r)};
                s.erase(it);
                insert(temp);
            }
        }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        int l=intervals.size();
        for(int i=0;i<l;i++){
            insert({intervals[i][0],intervals[i][1]});
        }
        for(auto n:s){
            vector<int>temp={n.l,n.r};
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end
