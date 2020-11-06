#include<stdio.h>
#include<stdlib.h>

long int factorial(int a);

void main(void)
{
	int m, n;
	long int ans;
	long int a,b,c;

	printf("求排列組合c(m.n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m - n);

	ans = a / (b*c);
	printf("c(%d,%d)=%d\n", m, n,ans);

	system("pause");
}
long int factorial(int p)
{
	int count;
	long int resault = 1;

	for (count = 1; count <= p; count++)
	{
		resault = resault * count;
	}
	return resault;
}