#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int y = 0, n = 0, q = 0, w = 0;;
	scanf("%d", &n);
	for (y = 1; y <= n; y++)
	{
		q += y;
		w += q;
	}
	printf("%d\n", w);
	return 0;
}