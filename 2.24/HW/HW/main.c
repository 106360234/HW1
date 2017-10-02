#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("Enter one number:");
	scanf("%d", &num);
	if (num % 2 ==0)
	{
		printf("This number is even.\n");
	}
	else
	{
		printf("This number is odd.\n");
	}
	system("pause");
	return 0;
}