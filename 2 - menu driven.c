#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i,j,sum;
    char n;
    while(1){
    printf(" A = Addition \n B = Subtraction \n C = Multiplication \n D = division \n E = exit \n");
    printf("Enter a number : ");
    scanf("%c",&n);
    fflush(stdin);
   switch(n)
    {
    case 'A':
            printf("Enter two number :\n");
            scanf("%d%d",&i,&j);
            int sum = i+j;
            printf("Sum is = %d\n",sum);
            break;
    case 'B':
            printf("Enter two number :\n");
            scanf("%d%d",&i,&j);
            int  sub = i-j;
            printf("Subtraction = %d\n",sub);
            break;
    case 'C':
            printf("Enter two number :\n");
            scanf("%d%d",&i,&j);
            int mul = i*j;
            printf("Multiplication = %d\n",sum);
            break;
    case 'D':
            printf("Enter two number :\n");
            scanf("%d%d",&i,&j);
            int div = i/j;
            printf("%d",sum);
            break;
    case 'E':
            return 0;


    default:
            printf("Enter valid choice");

    }
 }
}
