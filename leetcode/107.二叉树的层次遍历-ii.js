/*
 * @lc app=leetcode.cn id=107 lang=javascript
 *
 * [107] 二叉树的层次遍历 II
 *
 * https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (67.56%)
 * Likes:    331
 * Dislikes: 0
 * Total Accepted:    98.6K
 * Total Submissions: 145.9K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
 * 
 * 例如：
 * 给定二叉树 [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 返回其自底向上的层次遍历为：
 * 
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
 * 
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
 * @return {number[][]}
 */
var levelOrderBottom = function(root) {
    if(root==null)return [];
    floor=Math.floor;
    log2=Math.log2;
    var ans=[],l=[],ln=1;
    var q=[];
    q.push({i:1,p:root});
    while(q.length!=0){
        var n=q[0].i;
        if(floor(log2(n))+1>ln){ans.unshift(l);l=[];ln++;}
        l.push(q[0].p.val);
        //if(n==2**floor(log2(n)+1)-1){ans.unshift(l);l=[];}
        if(q[0].p.left!=null){q.push({i:n*2,p:q[0].p.left})};
        if(q[0].p.right!=null){q.push({i:n*2+1,p:q[0].p.right})};
        q.shift();
    }
    ans.unshift(l);
    return ans;
};
// @lc code=end

