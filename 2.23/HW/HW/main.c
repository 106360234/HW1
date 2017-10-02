#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,num3;
	
	printf("Enter three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if (num1>num2)
	{
		if (num2 > num3)
		{
			printf("%d is the largest,%d is the smallest\n",num1,num3);
		}
		else
		{
			if (num1>num3)
			{
				printf("%d is the largest,%d is the smallest\n",num1,num2);
			}
			else
			{
				printf("%d is the largest,%d is the smallest\n",num3,num2);
			}
		}
	}
	if (num2>num1)
	{
		if (num3 > num2)
		{
			printf("%d is the largest,%d is the smallest\n", num3, num1);
		}
		else
		{
			if (num3>num1)
			{
				printf("%d is the largest,%d is the smallest\n", num2, num1);
			}
			else
			{
				printf("%d is the largest,%d is the smallest\n", num2, num3);
			}
		}
	}
	system("pause");
	return 0;
}