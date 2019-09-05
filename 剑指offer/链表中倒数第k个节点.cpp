/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        // �ͷ�ת��������
		// ͬ���м�¼��ֱ�ӷ�ת���ַ��� 
        if (pListHead == NULL) return NULL;
        if (k <= 0) return NULL;
        
        vector<ListNode*> v;
        for (ListNode* i = pListHead; i != NULL; i = i->next) {
            v.push_back(i);
        }
        if (k > v.size()) return NULL;
        return v[v.size()-k];
    }
};
