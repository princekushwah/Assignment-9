#include<stdio.h>
int main()
{
	int number,choice;
	printf("1 Enter Negative to convert positive :\n");
	printf("2 Enter positive to convert negative :\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter a Negative number \n");
			scanf("%d",&number);
				number=number*(-1);
				printf(" Positive number is %d ",number);

			break;
		case 2:
			printf("Enter a Positive number \n");
			scanf("%d",&number);
                number=number*(-1);
				printf("Negative  number is %d",number);

		    break;
		default:
		    printf("Invalid Input, or Characters entered");
	}
	return 0;
}
