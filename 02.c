#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[3], b, c, d;

	scanf("%d %d %d", &a[0], &a[1], &a[2]);

	for (d = 0; d < 4; ++d)
	{
		for (b = 0; b < 3; ++b)
		{
			if ((b+1) != 3)
			{
				if(a[b+1]<a[b])
				{
					c = a[b+1];
					a[b+1]=a[b];
					a[b] = c;
				}
			}
		}
	}

	printf("%d\n%d\n%d", a[0], a[1], a[2]);

	return 0;
}