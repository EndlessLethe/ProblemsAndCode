#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
//         1. ������ʱ�临�Ӷ�O(n*size)
//         2. �߶�����ʱ�临�Ӷ�O(nlogn+nlogn)
//         3. ���������ȶ��У�һ������size�е�Ԫ��pq1��һ�������ѻ���ɾ����Ԫ��pq2
//         ÿ�λ���ʱ������ǰԪ��t��pq1.top()�Ĵ�С�������ȣ��򵯳����������pq2
//         ʱ�临�Ӷ�ΪO(n logn)
//         4. ά��һ���������У���������ģ���⣬ά�����������������ֵ 
        
        vector<int> res;
        
        // �߽����� size > num.size() or size <= 0
        // ����sb�⣬size > num.size()��Ҫֱ�ӷ��أ���������size=num.size() 
        // if (size > num.size()) size = num.size();
        if (size > num.size()) return res;
        if (size <= 0) return res;
        
        // ���ȶ��нⷨ 
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
//                // ��ɾ��ӣ���pq2������Сһ��
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



		//�������нⷨ
		int mq[100000] = {0}; 
		int l = 0, r = 0;
		// mq[0]������ֵ mq[r]Ϊ��ǰ���е����һ�� 
		// ��Ϊ��ά�����ֵ��������Ҫ�����ݼ��Ķ��� 
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
