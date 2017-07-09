#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, f, i;
	scanf("%d %d", &f, &i);

	if ((f >= 150) && (i >= 12))
	{
		a++;
	}
	if ((f >= 140) && (i >= 14))
	{
		a++;
	}
	if ((f >= 170) || (i >= 16))
	{
		a++;
	}

	printf("%d\n", a);

	return 0;
}