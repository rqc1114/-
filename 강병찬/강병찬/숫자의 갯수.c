#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, n;
	int A[10] = { 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	n = a * b * c;

	while (1)
	{
		A[n % 10]++;
		n /= 10;
		if (n == 0)
			break;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", A[i]);
	}


	return 0;
}