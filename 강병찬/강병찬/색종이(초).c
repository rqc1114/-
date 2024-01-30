#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct pos
{
	int x;
	int y;
}Pos;

int main(void)
{
	int A[100][100] = { 0 };
	int n;
	int s = 0;
	Pos p[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &p[i].x, &p[i].y);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = p[i].y; j < p[i].y + 10; j++)
		{
			for (int k = p[i].x; k < p[i].x + 10; k++)
			{
				A[j][k] = 1;
			}
		}
	}

	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 100; i++)
		{
			if (A[j][i] == 1)
				s++;
		}
	}

	printf("%d\n", s);

	return 0;
}