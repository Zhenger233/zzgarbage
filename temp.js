debug=1;




//leetcode 9
// var isPalindrome = function(x) {
//     //return x+''==(x+'').split('').reverse().join('')
//     if(x<0)return false;
//     let n=x;
//     let a=0;
//     while (x>0) {
//         a=a*10+x%10;
//         x=Math.floor(x/10);
//         if(debug)console.log('a,n,x',a,n,x);
//     }
//     return a==n;
// };
// if(debug)console.log(isPalindrome(121));


//leetcode 7
// var reverse = function(x) {
//     s=x<0?-1:1;
//     a=(x+'').replace('-','').split("").reverse();
//     if(debug)console.log('a=',a);
//     while(a[0]=='0')a.shift();
//     if(debug)console.log('a=',a);
//     s1=a.join('');
//     if(s<0)s1='-'+s1;
//     s1=+s1;
//     if(debug)console.log('s1=',s1);
//     if(s1>=-2147483648&&s1<=2147483647)return s1;
//     else return 0;
// };
// console.log(reverse(-88888888))


//leetcode 2
// let debug=1;
// let l2={val:7,next:{val:3,next:null}};
// let l1={val:0,next:null};
// var addTwoNumbers=function(l1,l2,a=[],f=0){
//     if(debug)console.log('a=',a,'f=',f);
//     if(!l1&&!l2){
//         if(f)a.push(1);
//         if(a[a.length-1]==0&&a.length!=1)a.pop();
//         ans=null;
//         while(a.length!=0){
//             if(debug)console.log('ans=',ans,a);
//             ans={val:a.pop(),next:ans};
//         }
//         return ans;
//     }
//     let t=f;
//     if(debug)console.log('pl:',l1,l2);
//     if(l1&&l1.val)t+=l1.val;
//     if(l2&&l2.val)t+=l2.val;
//     if(debug)console.log('t=',t);
//     a.push(t%10);
//     f=Math.floor(t/10);
//     l1=l1&&l1.next?l1.next:null;
//     l2=l2&&l2.next?l2.next:null;
//     return addTwoNumbers(l1,l2,a,f);
// }
// console.log('answer=',addTwoNumbers(l1,l2));


//leetcode 1
// let nums = [3, 1], target = 6;
// let twoSum = (nums, target) => {
//     let a = [];
//     for (i of nums) a.push(target - i);
//     console.log(a);
//     for (i in nums) {
//         let t = a.lastIndexOf(nums[i]);
//         console.log('t=', t);
//         if (t != -1 && t > i) return [+i, t];
//     }
// }
// console.log(twoSum(nums, target));