#include <stdio.h>

int main(int argc, char const *argv[])
{
	float a;
	scanf("%f", &a);
	if ((300 < a) && (a <= 500))
	{
		printf("%.2f", (a+(a*7)/100));
	}
	else if (a>500)
	{
		printf("%.2f", (a+(a*10)/100));
	}else
	{
		printf("%.2f", (a+(a*5)/100));
	}

	return 0;
}