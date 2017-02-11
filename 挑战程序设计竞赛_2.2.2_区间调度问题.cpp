#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

const int MAX_N=100000;  
//输入  
int N = 5,S[MAX_N] = {1,2,4,6,8},T[MAX_N] = {3,5,7,9,10};  
  
//用于对工作排序的pair数组  
pair<int, int> itv[MAX_N];  
  
int main()  
{  
    //对pair进行的是字典序比较，为了让结束时间早的工作排在前面，把T存入first，//把S存入second  
    for(int i=0;i<N;i++)  
    {  
        itv[i].first=T[i];  
        itv[i].second=S[i];  
    }  
  
    sort(itv, itv+N);  
  
    //t是最后所选工作的结束时间  
    int ans=0,t=0;  
    for(int i=0;i<N;i++)  
    {  
        if(t<itv[i].second)//判断区间是否重叠  
        {  
            ans++;  
            t=itv[i].first;  
        }  
    }  
  
    printf("%d\n",ans);  
    return 0;
}  
