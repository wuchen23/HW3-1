#include<stdio.h>
#include<stdlib.h>

double power(double,int );

int main()
{
	int k;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d",&k);
	printf("3.5的%d次方=%f\n",k, power(3.5,k));
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