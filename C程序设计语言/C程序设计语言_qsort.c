#include <stdio.h>
	void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
    if(left >= right)/*�������������ڻ��ߵ����ұߵ������ʹ����Ѿ��������һ������*/
    {
        return ;
    }
    swap(v, left, (left+right)/2);
    last=left;
    for (i = left+1; i <= right; i++)
    	if(v[i] < v[left])
    		{swap(v, ++last, i);
    		int k=0;// ������δ������ʱ������ʲô 
			}
		int k=0;// ������δ������ʱ������ʲô 
    swap(v, left, last);
    qsort(v, left, last-1);/*�����ͬ���ķ�ʽ�Էֳ�������ߵ�С�����ͬ�ϵ�����*/
    qsort(v, last+1, right);/*��ͬ���ķ�ʽ�Էֳ������ұߵ�С�����ͬ�ϵ�����*/
                       /*��Ȼ�����ܻ���ֺܶ�����ң�ֱ��ÿһ���i = j Ϊֹ*/
}

	void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
	
	
	int main()
	{
	int a[]={8,6,456,324,34,543,435,3412,1,36,};
	qsort ( a, 0, 9);
	return 0;
	}
