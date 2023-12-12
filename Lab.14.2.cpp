#include<iostream>
#include<stdio.h>

int main()
{
	float num1, num2, num3, minNum;

	printf("Enter first number: ");
	scanf_s("%f", &num1);
	printf("Enter second number: ");
	scanf_s("%f", &num2);
	printf("Enter third number: ");
	scanf_s("%f", &num3);
	
	if (num1 == num2 && num1 == num3) {
		printf("Numbers are equal");
	}
	else {
		minNum = num1;
		if (num2 <= num1)
			minNum = num2;
		if (num3 <= num2)
			minNum = num3;
		printf("The smalest number is: %.2f", minNum);
	}
	
	return 0;
}