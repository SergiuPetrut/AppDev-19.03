#include "pascal.h"

void pascal_triangle(int v)
{
	int i, j;
	for (i = 0; i < v; i++)
	{
		printf("%*c", (v - i), '  ');
		for (j = 0; j <= i; j++)
		{
			printf("%4d", comb(i, j));
		}
		printf("\n");
	}
}
	int comb(int n, int m)
	{

		if (n < m)
			return 0;
		else
		
			return fact(n) / (fact(n - m) * fact(m));
}