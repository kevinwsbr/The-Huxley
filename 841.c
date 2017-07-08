#include <stdio.h>
#define MEDIA ((a[0]+a[1]+a[2])/3)

int main(int argc, char const *argv[])
{
	float a[3];
	int b, c = 0;

	scanf("%f %f %f", &a[0], &a[1], &a[2]);

	for (b = 0; b < 3; ++b)
	{
		if ((a[b]>=0) && (a[b]<=10)) 
		{
			if (a[b]>MEDIA)
			{
				c++;
			}
		}
	}

	printf("%d", c);

	return 0;
}