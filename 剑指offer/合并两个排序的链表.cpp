#include <stdio.h> 
#include <stdlib.h>


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        // ˼·��
        //ֱ����list1���޸�
        // ��ѭ���бȽ�p1->next��p2�Ĵ�С�����p2��С���Ͳ���
        
        if (pHead1 == NULL) return pHead2;
        if (pHead2 == NULL) return pHead1;
        
        
        // ��֤pHead1С��pHead2
        if (pHead1->val > pHead2->val) {
            ListNode* tmp = pHead1;
            pHead1 = pHead2;
            pHead2 = tmp;
        }
        
        ListNode* p1 = pHead1, * p2 = pHead2;
        
        
        while (1) {
//        	printf("%d\n %d\n", p1->val, p2->val);
//        	printf("%d\n %d\n", p1->next, p2->next);
            // ���ߵ�list1����󣬽�list2ֱ������
            if (p1->next == NULL) {
                if (p2 != NULL) {
                    p1->next = p2;
                }
                break;
            }
            // list1����Ҫ����
            if (p2 == NULL) {
                break;
            }
            
            if (p1->next->val > p2->val) {
                ListNode* tmp1 = p1->next;
                ListNode* tmp2 = p2->next;
                
                p1->next = p2;
                p2->next = tmp1;
                p2 = tmp2;
            }
            else {
                p1 = p1->next;
            }
        }
        return pHead1;
    }
    }
};

void printList(ListNode* root) {
	for (ListNode* i = root; i != NULL; i = i ->next) {
		printf("%d\n", i->val);
	}
}

int main() {
	ListNode* n11 = new ListNode(2);
	ListNode* n12 = new ListNode(3);
	ListNode* n13 = new ListNode(5);
	ListNode* n14 = new ListNode(5);
	n11->next = n12;
	n12->next = n13;
	n13->next = n14;
	
	ListNode* n21 = new ListNode(1);
	ListNode* n22 = new ListNode(2);
	ListNode* n23 = new ListNode(3);
	ListNode* n24 = new ListNode(4);
	n21->next = n22;
	n22->next = n23;
	n23->next = n24;
	
	Solution s = Solution();
	printList(s.Merge(n11, n21));
	
	return 0;
}
