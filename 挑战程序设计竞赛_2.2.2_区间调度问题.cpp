#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const int MAX_N=100000;  
//����  
int N = 5,S[MAX_N] = {1,2,4,6,8},T[MAX_N] = {3,5,7,9,10};  
  
//���ڶԹ��������pair����  
pair<int, int> itv[MAX_N];  
  
int main()  
{  
    //��pair���е����ֵ���Ƚϣ�Ϊ���ý���ʱ����Ĺ�������ǰ�棬��T����first��//��S����second  
    for(int i=0;i<N;i++)  
    {  
        itv[i].first=T[i];  
        itv[i].second=S[i];  
    }  
  
    sort(itv, itv+N);  
  
    //t�������ѡ�����Ľ���ʱ��  
    int ans=0,t=0;  
    for(int i=0;i<N;i++)  
    {  
        if(t<itv[i].second)//�ж������Ƿ��ص�  
        {  
            ans++;  
            t=itv[i].first;  
        }  
    }  
  
    printf("%d\n",ans);  
    return 0;
}  
