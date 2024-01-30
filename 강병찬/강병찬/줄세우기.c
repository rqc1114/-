#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100

int main(void)
{
	int n, t;
	int A[N + 1];
	int B[N + 1]; //n명이 뽑은 숫자 저장 배열
	int C[N + 1]; //최종 결과 저장 배열

	//배열 index 1번부터

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		A[i] = i;
	}

	for (int i = 1; i <= n; i++)
	{
		scanf("%d ", B[i]);

	}

	t = 1;

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			C[i] = A[i]; t++;
			continue;
		}

		if (B[i] == 0)
		{
			C[t] = A[i]; t++;
		}

		else
		{
			for (int j = t - 1; j >= t - B[i]; j--)
			{
				C[j + 1] = C[j];
			}

			C[t - B[i]] = A[i]; t++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", C[i]);
	}

	/*
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			C[1] = A[1];
		}

		//1 2 3 4 5
		//0 1 1 3 2


		else
		{
			if (B[i] == 0)
			{
				C[i] = A[i];
			}
			else
			{
				B[i];
			}
		}
	}*/

	return 0;
}