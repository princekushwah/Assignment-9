#include<stdio.h>
int main()
{
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 switch(n%4==0&&n%100!=0||n%400==0)
 {
 case 0:
    {
        printf("This is not leap year :");
        break;
    }
  case 1:
    {
        printf("This is leap year:");
        break;
    }

 }
 return 0;
}
