#include <stdio.h>

int main(int argc, char const *argv[])
{
	double a, b;
	char c = '#';

	scanf("%lf", &a);
	do
	{
		scanf("%lf %c", &b, &c);
		if (c == '+')
		{
			a += b;
			printf("%.3lf\n", a);
		}
		else if (c == '-')
		{
			a -= b;
			printf("%.3lf\n", a);
		}
		else if (c == '*')
		{
			a *= b;
			printf("%.3lf\n", a);
		}
		else if (c == '/')
		{
			if (b == 0)
			{
				printf("operacao nao pode ser realizada");
			}
			else{
				a /= b;
				printf("%.3lf\n", a);
			}
		}
	} while (c != '&');

	return 0;
}