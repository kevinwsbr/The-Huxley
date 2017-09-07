#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}

	while (a < b)
	{
		if((a % 5 == 2) || (a % 5 == 3))
		{
			printf("%d\n", a);
		}
		a++;
	}

	return 0;
}