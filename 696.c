#include <stdio.h>

int main()
{
	int x[10], n, i, cont = 0;

	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &x[i]);
	}
	scanf("%d", &n);

	for (i = 0; i < 10; ++i)
	{
		if (x[i] == n)
		{
			cont++;
		}
	}
	printf("%d\n", cont);
}