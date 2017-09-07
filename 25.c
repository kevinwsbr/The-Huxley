#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;

	scanf("%d %d", &a, &b);

	while(a <= b)
	{
		if (((a % 10) != 0) && ((a % (a/10)) == 0))
		{
			printf("%d\n", a);
		}
		a++;
	}
}