/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 *
 * https://leetcode-cn.com/problems/insert-interval/description/
 *
 * algorithms
 * Hard (37.60%)
 * Likes:    322
 * Dislikes: 0
 * Total Accepted:    56.1K
 * Total Submissions: 140.8K
 * Testcase Example:  '[[1,3],[6,9]]\n[2,5]'
 *
 * 给出一个无重叠的 ，按照区间起始端点排序的区间列表。
 * 
 * 在列表中插入一个新的区间，你需要确保列表中的区间仍然有序且不重叠（如果有必要的话，可以合并区间）。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 输入：intervals = [[1,3],[6,9]], newInterval = [2,5]
 * 输出：[[1,5],[6,9]]
 * 
 * 
 * 示例 2：
 * 
 * 输入：intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
 * 输出：[[1,2],[3,10],[12,16]]
 * 解释：这是因为新的区间 [4,8] 与 [3,5],[6,7],[8,10] 重叠。
 * 
 * 
 * 
 * 
 * 注意：输入类型已在 2019 年 4 月 15 日更改。请重置为默认代码定义以获取新的方法签名。
 * 
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int l=intervals.size();
        for(int i=0;i<l;i++){
            insert({intervals[i][0],intervals[i][1]});
        }
        insert({newInterval[0],newInterval[1]});
        for(auto n:s){
            vector<int>temp={n.l,n.r};
            ans.push_back(temp);
        }
        return ans;
    }
};
// @lc code=end

