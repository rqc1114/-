#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000

int main(void)
{
	int n; // 3~1000
	int A[N][3];
	int s1 = 0, s2 = 0, s3 = 0, cnt1 = 0, cnt2 = 0;
	int n1 = 0, n2 = 0, t1, t2;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
		s1 += A[i][0], s2 += A[i][1], s3 += A[i][2];
	}

	/*
	//둘이 같은 경우
	if (s1 == s2 && s1 > s3)
	{
		for (int i = 0; i < 2; i++) //3,2비교
		{
			for (int j = 0; j < n; j++)
			{
				if (A[j][0] == 3 - i) { cnt1++; }

				if (A[j][1] == 3 - i) { cnt2++; }

			}

			if (cnt1 > cnt2 || cnt1 < cnt2)
			{
				if (cnt1 > cnt2)
				{
					printf("%d %d", 1, s1);
					return;
				}

				if (cnt1 < cnt2)
				{
					printf("%d %d", 2, s2);
					return;
				}
			}

			cnt1 = 0, cnt2 = 0;
		}

		printf("0 %d\n", s1); //3과 2의 갯수가 같을때
	}

	else if (s1 == s3 && s1 > s2)
	{
		for (int i = 0; i < 2; i++) //3,2비교
		{
			for (int j = 0; j < n; j++)
			{
				if (A[j][0] == 3 - i) { cnt1++; }

				if (A[j][2] == 3 - i) { cnt2++; }

			}

			if (cnt1 > cnt2 || cnt1 < cnt2)
			{
				if (cnt1 > cnt2)
				{
					printf("%d %d", 1, s1);
					return;
				}

				if (cnt1 < cnt2)
				{
					printf("%d %d", 3, s3);
					return;
				}
			}

			cnt1 = 0, cnt2 = 0;
		}

		printf("0 %d\n", s1); //3과 2의 갯수가 같을때
	}

	else if (s2 == s3 && s2 > s1)
	{
		for (int i = 0; i < 2; i++) //3,2비교
		{
			for (int j = 0; j < n; j++)
			{
				if (A[j][1] == 3 - i) { cnt1++; }

				if (A[j][2] == 3 - i) { cnt2++; }

			}

			if (cnt1 > cnt2 || cnt1 < cnt2)
			{
				if (cnt1 > cnt2)
				{
					printf("%d %d", 2, s2);
					return;
				}

				if (cnt1 < cnt2)
				{
					printf("%d %d", 3, s3);
					return;
				}
			}

			cnt1 = 0, cnt2 = 0;
		}

		printf("0 %d\n", s1); //3과 2의 갯수가 같을때
	}

	else
	{
		if (s1 == s2 && s2 == s3) //전부 같은 경우
		{


		}

		if (s1 != s2 && s1 != s3 && s2 != s3) //전부 다른 경우
		{

		}
	}*/



	if ((s1 == s2 && s1 > s3) || (s2 == s3 && s2 > s1) || (s1 == s3 && s1 > s2)) //둘이 같은 경우
	{

		if (s1 == s2) n1 = 0, n2 = 1, t1 = s1, t2 = s2;
		else if (s2 == s3)n1 = 1, n2 = 2, t1 = s2, t2 = s3;
		else n1 = 0, n2 = 2, t1 = s1, t2 = s3;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (A[j][n1] == 3 - i) { cnt1++; }

				if (A[j][n2] == 3 - i) { cnt2++; }

			}

			if (cnt1 > cnt2 || cnt1 < cnt2)
			{
				if (cnt1 > cnt2)
				{
					printf("%d %d", n1 + 1, t1);
					return;
				}

				if (cnt1 < cnt2)
				{
					printf("%d %d", n2 + 1, t2);
					return;
				}
			}

			cnt1 = 0, cnt2 = 0;
		}

		printf("0 %d\n", s1); 
	}

	if (s1 == s2 && s2==s3) //셋다 같은 경우
	{

	}

	if (s1!=s2 && s2!=s3 && s1!=s3) //셋다 다른 경우
	{
		if (s1 > s2 && s2 > s3)
		{
			printf("1 %d\n", s1);
		}

		else if (s2 > s1 && s1 > s3)
		{
			printf("2 %d\n", s2);
		}

		else
		{
			printf("3 %d\n", s3);
		}

	}

	return 0;
}