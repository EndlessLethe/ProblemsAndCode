// 计算数列A两两之间的差值向下取整后的和 最大1e5

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
const int MAXN = 100000+10;
const int INF = 0x7fffffff;
double a[MAXN];
//long long a[MAXN];
long long b[MAXN], upper_sum[MAXN];

bool cmp(double a, double b) {
	return a > b;
}

int main() {
    #ifdef LOCAL
		freopen("input_头条AICAMP 笔试二.txt", "r", stdin);
	#endif
    int n, m;
    while (cin >> n >> m) {
    	long long res = 0;
    	double sum = 0;
    	for (int i = 0; i < n; i++) {
	    		cin >> b[i];
	    		a[i] = ((double)b[i]) / m;
	    		sum += a[i];
			}
		sort(a, a+n, cmp);
    	if (n <= 1000) {
    		for (int i = 0; i < n; i++) {
    			for (int j = 0; j < i; j++) {
    				res += floor(a[j]-a[i]);
				}
				for (int j = i+1; j < n; j++) {
    				res += floor(a[i]-a[j]);
				}
			}
			cout << res/2 << endl;
		}
		else {
			memset(upper_sum, 0, sizeof(upper_sum));
			for (int i = 1; i < n; i++) {
				upper_sum[i] = upper_sum[i-1] + a[i-1];
			}
			for (int i = 0; i < n; i++) {
				res += 2*upper_sum[i] + (n-2*i)*a[i] - sum;
			}
			cout << res/2 << endl;
		}
    }
    return 0;
}


