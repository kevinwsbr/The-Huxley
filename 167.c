#include <stdio.h>

int main(int argc, char const *argv[])
{
	double a = -99, v = 0, x = 0, y = 0, z = 0, w = 0;
	do
	{
		scanf("%lf", &a);
		if (a != -1)
		{
			v++;
			if (a == 83)
			{
				x++;
			}
			else if (a == 93)
			{
				y++;
			}
			else if (a == 0)
			{
				z++;
			}
		}
	} while (a != -1);

	printf("%d\n%d\n%d\n%d\n", (int)x, (int)y, (int)z, (int)(v-(x+y+z)));
	y >= x ? printf("93\n") : printf("83\n");
	printf("%.2lf\n%.2lf\n", (x*100)/(x+y+z), (y*100)/(x+y+z));
	return 0;
}