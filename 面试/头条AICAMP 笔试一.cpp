// �������ͣ���0�ĸ���������3�� 

#include <iostream>
using namespace std;
typedef long long ll;
const ll MAXN = 1000000+10;
const ll INF = 1e10;
ll a[MAXN];

int main() {
    #ifdef LOCAL
		freopen("input_ͷ��AICAMP ����һ.txt", "r", stdin);
	#endif
    int n;
    while (cin >> n) {
    	ll maxA = -INF;
	    ll res = 0;
	    ll cnt = 0;
	    ll sum = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            maxA = max(maxA, a[i]);//�����Ϊ����
        }

        ll st = 0, end = 0;
        while (end < n) {
            if (a[end] == 0) cnt++;
            if (cnt > 3) {
                while (cnt > 3) {
                	sum -= a[st];
                    if (a[st] == 0) {
                        cnt--;
                    }
                    st++;
                    if (sum <= 0) {//�����ָ�������ƹ���������ֵΪ�� 
                    	sum = cnt = 0; 
                    	end = st;
                    	break;
					}
                    
                }
            }
            sum += a[end];
            res = max(res, sum);
            if (sum <= 0) {
                cnt = sum = 0;
                st = end;
            }
            end++;
        }

        if (maxA <= 0) cout << maxA << endl;
        else cout << res << endl;
    }
    return 0;
}

//    for (int i = 0; i < n; i++) {
//        sum += a[i];
//        res = max(res, sum);
//        if (a[i] == 0) cnt++;
//        else if (sum <= 0) {
//            sum = cnt = 0;
//        }
//        if (cnt > 3) {
//            sum = cnt = 0; 
//        }
//    }
