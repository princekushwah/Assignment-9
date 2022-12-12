#include<stdio.h>
int main()
{
    int num,chan;
    printf("Enter even number : ");
    scanf("%d",&num);
    switch(num%2==0)
    {
    case 0:
        {
          printf("Please enter even number ");
          break;

        }
    case 1:
        {
           chan=num+1;
           printf("Nearest odd number is %d",chan);
           break;
        }
    }

   return 0;
}
