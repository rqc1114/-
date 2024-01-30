#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int d, k;
	int i, j, l;
	int s,s1,s2;

	scanf("%d %d", &d, &k);

	for (i = 1; i <= k; i++) 
	{
		for (j = 1; j <= k; j++)              // k + k-1 + k-2 + ... + k-(k-2) + k- (k-1) 
		{
			s1 = i, s2 = j;
			for (l = 1; l <= d - 2; l++)
			{
				s = s1 + s2;
				s1 = s2, s2 = s;
			}

			if (s == k)
			{
				printf("%d %d\n", i, j);
				return 0;
			}
			s = 0;
		}
	}
}
