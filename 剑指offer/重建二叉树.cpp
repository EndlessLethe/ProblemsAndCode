#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void printTree(TreeNode* root) {
	printf("%d\n", root->val);
	if (root->left != NULL) printTree(root->left);
	if (root->right != NULL) printTree(root->right);
	return;
}

void printNode(TreeNode* root) {
	printf("%d\n", root->val);
	if (root->left != NULL) printf("%d\n", root->left->val);
	if (root->right != NULL) printf("%d\n", root->right->val);
	return;
}

void printVector(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        // ��������ĸ��ڵ������е��м䣬root��ߵĽڵ�Ϊ���������ұ߽ڵ�Ϊ������
        // ��ǰ������ĸ��ڵ�Ϊ��һ��Ԫ�أ����Է�����ҵ�root������˳����root - ������ - ������
        // ���Բ����ݹ����reConstructBinaryTree����
        
		if (pre.size() <= 0) return NULL;
		
		TreeNode* root = new TreeNode(pre[0]);
//        printNode(root);
        int size_ls = 0;
        for (int i = 0; i < vin.size(); i++) {
            if (vin[i] == pre[0]) {
                size_ls = i;
                break;
            }
        }
        
        // ��Ѱ�ҹ����У�pre��vinһ���ǵȳ��ģ�����size_ls����Խ�� 
        
        vector<int> lpre(pre.begin()+1, pre.begin()+size_ls+1);
        vector<int> rpre(vector<int>(pre.begin()+size_ls+1, pre.end()));
        vector<int> lvin(vector<int>(vin.begin(), vin.begin()+size_ls));
        vector<int> rvin(vector<int>(vin.begin()+size_ls+1, vin.end()));
        
        
//        printVector(lpre);
//        printVector(rpre);
//        printVector(lvin);
//        printVector(rvin);
        
        TreeNode* ls = reConstructBinaryTree(lpre, lvin);
        TreeNode* rs = reConstructBinaryTree(rpre, rvin);
        root->left = ls;
        root->right = rs;
//        printNode(root);
        return root;
    }
};



int main() {
	int n1[] = {1, 2, 4, 7, 3, 5, 6, 8};
	int n2[] = {4, 7, 2, 1, 5, 3, 8, 6};
	vector<int> v1(n1, n1+8);
	vector<int> v2(n2, n2+8);
	Solution s = Solution();
	TreeNode* root = s.reConstructBinaryTree(v1, v2);
	printTree(root);
	return 0;
}
