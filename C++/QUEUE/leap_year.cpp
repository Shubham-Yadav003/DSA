#include<stdio.h>
int is_leap(int year)
{
    if(year%4==0&&year%100==0)
     if(year%400==0)
       return 1;
    else
     return -1;
}
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    int y=is_leap(year);
    if(y=-1)
    printf("True");
    else
	printf("False");   
}
