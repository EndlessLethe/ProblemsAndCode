#include <stdio.h>

   int day_of_year(int year, int month, int day);
   void month_day(int year, int yearday, int *pmonth, int *pday);

	int main()
	{

	return 0;
	}
	
	
	
	
   static char *daytab[2] = {
       {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
       {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
   };

   /* day_of_year:  set day of year from month & day */
   int day_of_year(int year, int month, int day)
   {
       int i = 0;
       int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
       //这里有等号优先级高于赋值号 
       while (i < month)
           day += *daytab[leap]++;
       return day;
   }
	//while后面的daytab如何使它用指针呢？ 


   /* month_day:  set month, day from day of year */
   void month_day(int year, int yearday, int *pmonth, int *pday)
   {
       int i = 0;
       int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
       while (yearday > *daytab[leap])
           yearday -= *daytab[leap]++;
       *pmonth = i;
       *pday = yearday;
   }



