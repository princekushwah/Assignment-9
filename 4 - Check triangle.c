#include<stdio.h>
int main()
{
    int a,b,c,n;
    while(1){
    printf("1 Check isosceles triangel :\n");
    printf("2 Check right angled triangel :\n");
    printf("3 Check equilateral triangel : \n");
    printf("4 exit \n");
    printf("Choose any one \n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
          printf("Enter Three sides value : ");
          scanf("%d%d%d",&a,&b,&c);
          if(a==b||b==c||c==a)
              printf("This is isosceles triangle :");
          else
            printf("its not isosceles triangle : ");
            break;
        }
    case 2:
        {
         printf("Enter Three sides value : ");
          scanf("%d%d%d",&a,&b,&c);
          if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
            printf("This is right angled triangle");
          else
            printf("Its not right angled triangle");
            break;
        }
    case 3:
        {
           printf("Enter Three sides value : ");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b&&b==c)
                printf("equilateral triangle ");
           else
            printf("No equilateral triangle ");
            break;
        }
    case 4:
        {
          return 0;
        }

     }
      printf("\n\n");
  }

}
