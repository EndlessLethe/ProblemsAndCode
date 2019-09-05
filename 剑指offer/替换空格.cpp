#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class Solution {
public:
	void replaceSpace(char *str,int length) {
        char res[length*3+5];
        int ptr = 0;
        for (int i = 0; i < length; i++) {
            if (str[i] != ' ') {
                res[ptr++] = str[i];
            }
            else {
                res[ptr++] = '%';
                res[ptr++] = '2';
                res[ptr++] = '0';
            }
        }
        
        res[ptr] = '\0';
        //这sb题输出的是原来str的
//        str = res;
		strcpy(str, res);
//        printf("%s\n", res);
//        printf("%s", str);
	}
};

int main() {
	Solution s = Solution();
	s.replaceSpace("happy new year", 14);
}

