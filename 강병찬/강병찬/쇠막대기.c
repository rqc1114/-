#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char A[100000];
	int k=0 , cnt = 0;

	// (((()(()()))(())()))(()())

	scanf("%s",A);
	
	for (int i = 0; i < strlen(A); i++)
	{
		if (A[i] == '(')
		{
			k++;
		}

		else if (A[i] == ')')
		{
			if (A[i - 1] == '(')
			{
				k--;
				cnt += k;
			}

			else
			{
				k--;
				cnt++;
			}
		}
	}

	printf("%d\n", cnt);

	return 0;
}
