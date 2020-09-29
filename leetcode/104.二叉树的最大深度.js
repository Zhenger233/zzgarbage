/*
 * @lc app=leetcode.cn id=104 lang=javascript
 *
 * [104] 二叉树的最大深度
 *
 * https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/description/
 *
 * algorithms
 * Easy (74.99%)
 * Likes:    697
 * Dislikes: 0
 * Total Accepted:    273.4K
 * Total Submissions: 364.4K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，找出其最大深度。
 * 
 * 二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
 * 
 * 说明: 叶子节点是指没有子节点的节点。
 * 
 * 示例：
 * 给定二叉树 [3,9,20,null,null,15,7]，
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 返回它的最大深度 3 。
 * 
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxDepth = function(root) {
    var ans=0;
    var q=[],n=1;
    if(root==null)return 0;
    q.push({i:1,p:root});
    while(q.length!=0){
        n=q[0].i;
        ans=Math.max(ans,n);
        if(q[0].p.left!=null){q.push({i:n+1,p:q[0].p.left})};
        if(q[0].p.right!=null){q.push({i:n+1,p:q[0].p.right})};
        q.shift();
    }
    return ans;
};
// @lc code=end
