#include <stdio.h>

int main(int argc, char const *argv[])
{
	float a;

	scanf("%f", &a);

	a = (a*75)/100;

	if (a<2000)
	{
		printf("ARGENTINA");
	}
	else if (a<3000)
	{
		printf("ESPANHA");
	}
	else
	{
		printf("ALEMANHA");
	}

	return 0;
}