#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
	int n;
	int A[100000];
	int t, flag = 1, cnt = 1, x;
	int max = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) 
	{
		scanf("%d", A[i]);
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (A[j] != A[j + 1])
			{
				if (A[j] > A[j + 1])
				{
					cnt++, x = -1;
				}
				else if (A[j] < A[j + 1])
				{
					cnt++, x = +1;
				}

				if (j==0)
					t = x;

				if (t != x)
					flag = 0;

				t = x;
			}

			if (flag == 0)
			{
				if (max < cnt)
					max = cnt;
				cnt = 1;
				break;
			}
		}
	}

	printf("%d\n", max); */
	


	int n;
	int A[100000];
	int cnt1=1, cnt2=1, max = 0; 

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", A[i]);
	}

	//이전에 짠 코드처럼 2중 for문 쓸필요 없음 
	for (int i = 0; i < n-1; i++) //cnt1은 증가하는 수열의 길이 cnt2는 감소하는 수열의 길이
	{
		if (A[i] < A[i + 1]) //증가하는 수열일때 cnt1길이 누적
		{
			cnt1++;
			cnt2 = 1;
			if (max < cnt1) 
				max = cnt1;
		}

		else if (A[i] > A[i + 1]) //감소하는 수열일때 cnt2길이 누적
		{
			cnt1=1;
			cnt2++;
			if (max < cnt2)
				max = cnt2;
		}

		else if (A[i] == A[i+ 1]) //같은경우가 있기때문에 cnt1만 쓰지않고 cnt1,cnt2변수 2개를 잡게된다고 
		{
			cnt1++;
			cnt2++;
		}
	}

	return 0;
}