#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b , c, d,e, sum;
	printf("�@��Ѫ��`���{��\t");
	scanf("%f", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�\t");
	scanf("%f", &b);
	printf("�����@����/�[�گ��p�h�֤���\t");
	scanf("%f", &c);
	printf("�@�Ѫ������O\t");
	scanf("%f", &d);
	printf("�L���O\t");
	scanf("%f", &e);
	sum = a / c*b + d + e;
	printf("�`��O:\t %.3f\n",sum);
	system("pause");
	return 0;
}