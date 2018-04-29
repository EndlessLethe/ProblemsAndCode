/**
 * @Date:   27-Apr-2018
 * @Email:  zengsw_study@qq.com
 * @Filename: 斐波那契数列.cpp
 * @Last modified time: 27-Apr-2018
 * @Copyright: ©2017 EndlessLethe. All rights reserved.
 */

 class Solution {
 public:
     int f[50];
     int Fibonacci(int n) {
		 f[0] = 0, f[1] = 1;
 	 	for (int i = 2; i <= n; i++) {
			f[i] = f[i-1] + f[i-2];
		}
		return f[n];
     }
 };
