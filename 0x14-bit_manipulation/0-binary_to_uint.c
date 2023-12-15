#include<stdio.h>

int main() 
{
	int decimal = 0, weight = 1;
	int b, rem =0;
	printf("Enter a binary number: ");
	scanf_s("%d", &b);
	while (b != 0) 
	{
		rem = b % 10;
		decimal = decimal + (rem * weight);
		b = b / 10;
		weight = weight * 2;
	}
	printf("%d", decimal);
	return 0;
}