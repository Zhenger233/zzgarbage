/*
 * @lc app=leetcode.cn id=83 lang=javascript
 *
 * [83] 删除排序链表中的重复元素
 *
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (51.40%)
 * Likes:    390
 * Dislikes: 0
 * Total Accepted:    139.2K
 * Total Submissions: 270.6K
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
 * 
 * 示例 1:
 * 
 * 输入: 1->1->2
 * 输出: 1->2
 * 
 * 
 * 示例 2:
 * 
 * 输入: 1->1->2->3->3
 * 输出: 1->2->3
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
function ListNode(val) {
    this.val = val;
    this.next = null;
}
var deleteDuplicates = function(head) {
    var p=head,i=p;
    console.log(p,i);
    while(i!=null){
        if(i.val!=p.val){
            p.next=i;
            p=i;
        }
        if(i.next==null){
            if(p.val==i.val)p.next=null;
            break;
        }
        i=i.next;
    }
    return head;
};
console.log(deleteDuplicates(null));
// @lc code=end

