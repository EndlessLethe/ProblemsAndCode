/**
 * @Date:   27-Apr-2018
 * @Email:  zengsw_study@qq.com
 * @Filename: 斐波那契数列.cpp
 * @Last modified time: 27-Apr-2018
 * @Copyright: ©2017 EndlessLethe. All rights reserved.
 */

 class Solution {
 public:
      int  NumberOf1(int n) {
          int cnt = 0;
          while (n != 0) {
              n -= n & -n;
              cnt++;
          }
          return cnt;
      }
 };
//Note：如果每次右移的话要注意负数最高位会自动填充1，导致死循环。
