#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,sum1,sum2;
	printf("Enter two numbers:");
	scanf("%d %d", &num1,&num2);
	sum1 = num1*num2;
	sum2 = num1 % num2;
	printf("%d\n",sum1);
	printf("%d\n", sum2);
	system("pause");
	return 0;
}