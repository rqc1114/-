#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[4][8];

char f(int i)
{
	if (1)
	{
		return 'a';
	}

	else if(2)
	{
		return 'b';
	}

	else if (3)
	{
		return 'c';
	}

	else if (4)
	{
		return 'd';
	}
}

int main(void)
{

		/*3 10 50 60 100 100 200 300
		45 50 600 600 400 450 500 543
		11 120 120 230 50 40 60 440
		35 56 67 90 67 80 500 600*/


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}







		
	for (int i = 0; i < 4; i++)
	{
		printf("%c\n", f(i));
	}

	return 0;
}
