#include<stdio.h>
int main()
{
    int n;
    while(1){
    printf("Enter a var :\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            printf("Good");
            break;
        }
    case 2:
        {
            printf("Better");
            break;
        }
    case 3:
        {
            printf("Best");
            break;
        }
    case 4:
        {
          return 0;
        }
    default:
        {
            printf("Invalid");
        }
     }
     printf("\n\n");
    }
    return 0;
}
