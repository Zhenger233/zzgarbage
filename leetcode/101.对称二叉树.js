/*
 * @lc app=leetcode.cn id=101 lang=javascript
 *
 * [101] 对称二叉树
 *
 * https://leetcode-cn.com/problems/symmetric-tree/description/
 *
 * algorithms
 * Easy (52.92%)
 * Likes:    1011
 * Dislikes: 0
 * Total Accepted:    205K
 * Total Submissions: 387.2K
 * Testcase Example:  '[1,2,2,3,4,4,3]'
 *
 * 给定一个二叉树，检查它是否是镜像对称的。
 * 
 * 
 * 
 * 例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
 * 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠/ \ / \
 * 3  4 4  3
 * 
 * 
 * 
 * 
 * 但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:
 * 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠  \   \
 * ⁠  3    3
 * 
 * 
 * 
 * 
 * 进阶：
 * 
 * 你可以运用递归和迭代两种方法解决这个问题吗？
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
 * @return {boolean}
 */
var isSymmetric = function(root) {
    var t={},q=[],n=1;
    if(root==null)return true;
    q.push({i:1,p:root});
    while(q.length!=0){
        n=q[0].i;
        t[n]=q[0].p.val;
        if(q[0].p.left!=null){q.push({i:n*2,p:q[0].p.left})};
        if(q[0].p.right!=null){q.push({i:n*2+1,p:q[0].p.right})};
        q.shift();
    }
    for(let i=1;i<=n;i++){
        if(t[i]!=t[Math.pow(2,(Math.floor(Math.log2(i))+1))-(i-Math.pow(2,Math.floor(Math.log2(i))))-1])return false;
    }
    return true;
};
// @lc code=end

