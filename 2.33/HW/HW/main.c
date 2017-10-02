#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b , c, d,e, sum;
	printf("一整天的總里程數\t");
	scanf("%f", &a);
	printf("汽油一公升/加侖多少錢\t");
	scanf("%f", &b);
	printf("平均一公升/加侖能行駛多少公里\t");
	scanf("%f", &c);
	printf("一天的停車費\t");
	scanf("%f", &d);
	printf("過路費\t");
	scanf("%f", &e);
	sum = a / c*b + d + e;
	printf("總花費:\t %.3f\n",sum);
	system("pause");
	return 0;
}