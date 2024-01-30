#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[10];
	int B[10];
	int sA=0, sB=0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &A[i]); //배열인덱스에 입력받는다 하더라도 &붙여줘야됨 
		                    //문자열인 경우는 &안붙여도됨
	}

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (A[i] == B[i])
		{
			
		}
		else
		{
			if (A[i] > B[i])
				sA++;
			else
				sB++;
		}
	}

	if (sA > sB)
		printf("A\n");
	else if (sA < sB)
		printf("B\n");
	else
		printf("D\n");
	
	return 0;

}
