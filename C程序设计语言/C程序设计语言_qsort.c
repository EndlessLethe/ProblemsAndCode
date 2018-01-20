#include <stdio.h>
	void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
    if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    {
        return ;
    }
    swap(v, left, (left+right)/2);
    last=left;
    for (i = left+1; i <= right; i++)
    	if(v[i] < v[left])
    		{swap(v, ++last, i);
    		int k=0;// 检验在未发生的时候发生了什么 
			}
		int k=0;// 检验在未发生的时候发生了什么 
    swap(v, left, last);
    qsort(v, left, last-1);/*最后用同样的方式对分出来的左边的小组进行同上的做法*/
    qsort(v, last+1, right);/*用同样的方式对分出来的右边的小组进行同上的做法*/
                       /*当然最后可能会出现很多分左右，直到每一组的i = j 为止*/
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
