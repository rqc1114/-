#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	return gcd(b, a % b);
}

int main(void)
{
	int a, b;
	int i;
	/*int x, y;
	int C[10000];
	int n = 1, i = 0, j;*/

	scanf("%d %d", &a, &b);

	//for (i = a; i >= 1; i--) {
	//	if (a % i == 0 && b % i == 0) 
	// {
	//		printf("%d\n", i);
	//		break;
	//	}
	//}

	printf("%d\n", i = gcd(a, b));

	printf("%d", a * b / i);

	//while (1) //서로소인 경우 처리 필요
	//{
	//	if (n > a || n > b)
	//	{
	//		i--;
	//		break;
	//	}

	//	if (a % n == 0 && b % n == 0)
	//	{
	//		C[i] = n;
	//		i++;
	//	}
	//	n++;
	//}

	//j = 1, n = 1; //공약수1은 건너뛰고

	//while (1)
	//{

	//	if (j > i)
	//	{
	//		printf("%d\n", n);
	//		printf("%d\n", n * a * b);
	//		break;
	//	}

	//	if (a % C[j] == 0 && b % C[j] == 0)
	//	{
	//		n *= C[j];
	//		a /= C[j], b /= C[j];
	//		j = 1;
	//	}
	//	j++;
	//}


	return 0;

}
