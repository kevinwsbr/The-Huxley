#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j;
	float a[5], c;
	scanf("%f %f %f %f %f", &a[0], &a[1], &a[2], &a[3], &a[4]);
	for (j = 0; j < 6; ++j)
	{
		for (i = 0; i < 5; ++i)
		{
			if (i<4)
			{
				if (a[i]>a[i+1])
				{
					c = a[i];
					a[i] = a[i+1];
					a[i+1] = c;
				}
			}
		}
	}
	printf("%.1f", a[1] + a[2] + a[3]);
	return 0;
}