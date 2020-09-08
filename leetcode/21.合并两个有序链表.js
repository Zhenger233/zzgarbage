/*
 * @lc app=leetcode.cn id=21 lang=javascript
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (63.74%)
 * Likes:    1190
 * Dislikes: 0
 * Total Accepted:    334.3K
 * Total Submissions: 524.4K
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 
 * 
 * 示例：
 * 
 * 输入：1->2->4, 1->3->4
 * 输出：1->1->2->3->4->4
 * 
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

// var ListNode = (val, next) => { this.val = (val === undefined ? 0 : val); this.next = (next === undefined ? null : next) }

/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
function ListNode(val,next) {
    this.val=(val===undefined?0:val);
    this.next=(next===undefined?null:next)
}
let l1 = new ListNode(1, new ListNode(2, new ListNode(4, null)));
let l2 = new ListNode(1, new ListNode(3, new ListNode(4, null)));
// let l1=new ListNode();
// let l2=new ListNode();
var mergeTwoLists = function (l1, l2) {
    let ans =new Object(),i=ans;
    while (1) {
        console.log(l1,l2);
        if (l1 && l1.hasOwnProperty('val')&&l2 &&l2.hasOwnProperty('val')){
            if (l1.val < l2.val) {
                i.val=l1.val;
                l1 = l1.next;
            }else{
                i.val=l2.val;
                l2 = l2.next;
            }
        }else if(l1 && l1.hasOwnProperty('val')){
            i.val=l1.val;
            l1 = l1.next;
        }else if(l2 &&l2.hasOwnProperty('val')){
            i.val=l2.val;
            l2 = l2.next;
        }
        
        if((!l1&&!l2)||(l1&&!l1.hasOwnProperty('val')&&!l2)||(l2&&!l2.hasOwnProperty('val')&&!l1)||(l1&&!l1.hasOwnProperty('val')&&l2&&!l2.hasOwnProperty('val'))){i.next=null;break;}
        i.next=new ListNode();
        i=i.next;
    }
    if(!ans.hasOwnProperty('val'))return null;
    return ans;
};
console.log('ans:',mergeTwoLists({},{}));
// @lc code=end

