#include<stdio.h>
#include<stdlib.h>

double power(double,int );

int main()
{
	int k;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d",&k);
	printf("3.5��%d����=%f\n",k, power(3.5,k));
	system("pause");
}
double power(double c,int n)
{
	int i;
	double sum = 1;
	for (i = 1; i <= n; i++)
		sum *= c;
	return sum;
}