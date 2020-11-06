#include <stdio.h>
#include <stdlib.h>

int odd(int U);
int even(int U);
int totalsum(int U);

int main()
{
	int n, sum;
	char addchoice;
	printf("1+2+....+n=?請輸入n=");
	scanf_s("%d", &n);
	printf("請問要做奇數和(o),偶數和(e),還是整數和(i)?請選擇:");
	scanf_s(" %c", &addchoice);

	switch (addchoice)
	{
	case 'o':
		sum = odd(n);
		break;
	case 'e':
		sum = even(n);
		break;
	case 'i':
		sum = totalsum(n);
		break;
	default:
		printf("選擇錯誤\n");
		return -1;

	}
	printf("總合為%d\n", sum);
	system("pause");
	return 0;
	}
	int odd(int U)
	{
		int i, total = 0;
		for (i = 1; i <= U; i++)
		{
			if (i % 2 == 1)
				total = total + i;
		}
		return total;
	}
	int even(int U)
	{
		int i, total = 0;
		for (i = 1; i <= U; i++)
		{
			if (i % 2 == 0)
				total = total + i;
		}
			return total;
		
	}
	int totalsum(int U)
	{
		return odd(U) + even(U);
	}


