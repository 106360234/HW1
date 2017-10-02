#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float weight, BMI, beigbtInMeters;
	printf("Enter your data.\n");
	printf("weight:\t");
	scanf("%f", &weight);
	printf("beigbtInMeters:\t");
	scanf("%f", &beigbtInMeters);
	BMI = weight / (beigbtInMeters * beigbtInMeters);
	printf("Your BMI is %f\n",BMI);
	printf("Your body is \t");
	if (BMI < 18.5)
	{
		printf("Underweight\n");
	}
	if (BMI > 18.5 && BMI < 25)
	{
		printf("Normal\n");
	}
	if (BMI > 25 && BMI < 29)
	{
		printf("Overweight\n");
	}
	printf("BMI	VALUES\n");
	printf("Underweight : less than 18.5\n");
	printf("Normal : between 18.5 and 24.9\n");
	printf("Overweight : between 25 and 29\n");
	system("pause");
	return 0;
}