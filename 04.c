#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, i, j, fj = 0, fm = 0, sj = 0, sm = 0;
	scanf("%d", &a);
	int f[a]; 
	for (i = 0; i < a; ++i)
	{
		scanf("%d", &b);
		for (j = 0; j < a; ++j)
		{
			if (f[j] == b)
			{
				f[j] = 0;
			}
		}
		f[i] = b;

		if (b % 2 == 0)
		{
			fj++;
		}
		else
		{
			fm++;
		}
	}

	for (i = 0; i < a; ++i)
	{
		if (f[i] % 2 == 0)
		{
			sj += f[i];
		}
		else
		{
			sm += f[i];
		}
	}

	sj > sm ? printf("%d\n%d\n%d\n", fj, fm, sj) : printf("%d\n%d\n%d\n", fj, fm, sm);
	
	return 0;
}