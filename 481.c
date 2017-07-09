#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;

	scanf("%d", &a);
	for (b = a; b >= 1; b--)
	{
		if (a%b == 0)
		{
			printf("%d\n", b);
		}
	}

	return 0;
}