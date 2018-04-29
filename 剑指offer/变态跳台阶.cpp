/**
 * @Date:   28-Apr-2018
 * @Email:  zengsw_study@qq.com
 * @Filename: 变态跳台阶.cpp
 * @Last modified time: 28-Apr-2018
 * @Copyright: ©2017 EndlessLethe. All rights reserved.
 */


 class Solution {
 public:
     int sum[100];
     int jumpFloorII(int number) {
         sum[0] = 0, sum[1] = 1, sum[2] = 3;
         for (int i = 2; i <= number; i++) {
             sum[i] = 2 * sum[i-1] + 1;
         }
         return sum[number]-sum[number-1];
     }
 };
 //Note：
 //因为f[i]=sum[i-1]+1
 //sum[i]-sum[i-1]=f[i]
 //故sum[i] = 2 * f[i-1] +1

//当然还可以f[i]=f[i-1] + 后面一堆
//后面一堆 = f[i-1]
//故f[i] = 2 * f[i-1]
