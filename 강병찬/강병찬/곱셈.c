#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, t, d;
	int d1, d2, d3;
	int s = 0;

	scanf("%d", &a);
	scanf("%d", &b);



	t = b, t = t % 10;
	d1 = a * (t), t /= 10;
	printf("%d\n", d1);
	t = t % 10;
	d2 = a * (t); t /= 10;
	printf("%d\n", d2);
	t = t % 10;
	d3 = a * (t);
	printf("%d\n", d3);
	s += d1 + d2 * 10 + d3 * 100;
	printf("%d\n", s);

	//t = b, d = 1;

	/*
	while (1)
	{
		if (t == 0)
		{
			printf("%d\n",s);
			break;
		}
		t = t % 10, s += (a * t * d);
		printf("%d\n", a * t);
		d *= 10, t /= 10;
	}
	*/

	return 0;

}
