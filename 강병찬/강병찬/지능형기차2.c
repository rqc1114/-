#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[10], B[10];
	int m = 0, n = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d %d", &A[i], &B[i]);

		n += (-A[i] + B[i]);

		if (n > m)
		{
			m = n;
		}
	}

	printf("%d\n", m);

	return 0;
}
