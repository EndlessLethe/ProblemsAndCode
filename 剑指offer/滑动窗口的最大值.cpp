#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
//         1. 暴力，时间复杂度O(n*size)
//         2. 线段树，时间复杂度O(nlogn+nlogn)
//         3. 用两个优先队列，一个容纳size中的元素pq1，一个容纳已滑动删除的元素pq2
//         每次滑动时，看当前元素t和pq1.top()的大小，如果相等，则弹出，否则加入pq2
//         时间复杂度为O(n logn)
//         4. 维护一个单调队列，单调队列模板题，维护滑动区间的区间最值 
        
        vector<int> res;
        
        // 边界条件 size > num.size() or size <= 0
        // 又是sb题，size > num.size()需要直接返回，而不是让size=num.size() 
        // if (size > num.size()) size = num.size();
        if (size > num.size()) return res;
        if (size <= 0) return res;
        
        // 优先队列解法 
//        priority_queue<int> pq1, pq2; 
// 
//        for (int i = 0; i < size; i++) {
//            pq1.push(num[i]);
//        }
//        res.push_back(pq1.top());
////        printf("%d\n", num.size());
//        for (int i = size; i < num.size(); i++) {
////        	printf("i %d pq1.size %d pq1.top %d\n", i, pq1.size(), pq1.top());
//            if (num[i-size] == pq1.top()) {
//                pq1.pop();
//                // 先删后加，让pq2尽可能小一点
//                while (!pq2.empty() && pq2.top() == pq1.top()) {
//                    pq2.pop();
//                    pq1.pop();
//                }
//            }
//            else {
//                pq2.push(num[i-size]);
//            }
//            pq1.push(num[i]);
//            res.push_back(pq1.top());
////            printf("add %d\n", pq1.top());
//        }
//        return res;



		//单调队列解法
		int mq[100000] = {0}; 
		int l = 0, r = 0;
		// mq[0]不储存值 mq[r]为当前队列的最后一个 
		// 因为是维护最大值，所以需要单调递减的队列 
		for (int i = 0; i < size; i++) {
            while (l < r && mq[r] < num[i]) --r;
            mq[++r] = num[i];
        }
        res.push_back(mq[l+1]);
//        printf("%d\n", mq[l+1]);
        for (int i = size; i < num.size(); i++) {
        	if (l < r && num[i-size] == mq[l+1]) l++;
        	while (l < r && mq[r] < num[i]) --r;
        	mq[++r] = num[i];
        	res.push_back(mq[l+1]);
//        	printf("add %d\n", mq[l+1]);
		}
		return res;
    }
};

int main() {
	Solution s = Solution();
	vector <int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(6);
	v.push_back(2);
	v.push_back(5);
	v.push_back(1);
	s.maxInWindows(v, 3);
	return 0;
}
