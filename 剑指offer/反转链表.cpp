#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
    	// 1. 需要记录一下指针，需要额外空间
		// 2. 在遍历时就修改，不需要额外空间 
    	
    	
    	// 先从前往后记录一下，再从后往前直接改 
    	
    	// 这种写法还是需要注意一下边界条件 
    	// 1. pHead == NULL时，v为空
		// 2. pHead == NULL时，不存在v[i]->next 
        vector<ListNode*> v;
        for (ListNode* i = pHead; i != NULL; i = i->next) {
            v.push_back(i);
        }
        for (int i = v.size()-1; i >= 0; i--) {
            if (i != 0) v[i]->next = v[i-1];
            else v[i]->next = NULL;
        }
        return v.back();

		// 直接交换 
//		ListNode* last = NULL, * next = NULL;
//        for (ListNode* i = pHead; i != NULL; ) {
//            next = i->next;
//            i->next = last;
//            last = i;
//            i = next;
//        }
//        return last;
    }
};

void printList(ListNode* pHead){
	for (ListNode* i = pHead; i != NULL; i = i->next) {
        printf("%d\n", i->val);
    }
}

int main() {
	ListNode* n1 = new ListNode(1);
	printf("%d\n", n1);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(3);
	ListNode* n4 = new ListNode(4);
	ListNode* n5 = new ListNode(5);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	
	Solution s = Solution();
	printList(s.ReverseList(n1));
	printf("%d\n", s.ReverseList(n1));
	
	return 0;
} 
