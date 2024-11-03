#include<stdio.h>
#include<stdlib.h>

int max(int, int, int);

int main()
{
	int number1, number2, number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("Maximum is : %d\n", max(number1, number2, number3));
	system("pause");
	return 0;
}
int max(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}