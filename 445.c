#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (b>100)
	{
		printf("%.2f", (float)((b/a)*90) + ((b%a)*12));
	}else
	{
		printf("%.2f", (float)a*90);
	}

	return 0;
}