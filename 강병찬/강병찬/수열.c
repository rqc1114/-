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

	//������ § �ڵ�ó�� 2�� for�� ���ʿ� ���� 
	for (int i = 0; i < n-1; i++) //cnt1�� �����ϴ� ������ ���� cnt2�� �����ϴ� ������ ����
	{
		if (A[i] < A[i + 1]) //�����ϴ� �����϶� cnt1���� ����
		{
			cnt1++;
			cnt2 = 1;
			if (max < cnt1) 
				max = cnt1;
		}

		else if (A[i] > A[i + 1]) //�����ϴ� �����϶� cnt2���� ����
		{
			cnt1=1;
			cnt2++;
			if (max < cnt2)
				max = cnt2;
		}

		else if (A[i] == A[i+ 1]) //������찡 �ֱ⶧���� cnt1�� �����ʰ� cnt1,cnt2���� 2���� ��Եȴٰ� 
		{
			cnt1++;
			cnt2++;
		}
	}

	return 0;
}