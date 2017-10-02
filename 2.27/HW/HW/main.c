#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (unsigned i = 1; i <= 8; i++)
	{
		if (i % 2 == 1)
		{
			printf("* * * * * * * * \n");
		}
		else
		{
			printf(" * * * * * * * *\n");
		}
	}
	system("pause");
	return 0;
}