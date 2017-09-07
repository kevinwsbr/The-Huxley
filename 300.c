#include <stdio.h>
#include <math.h>
#define GO 1
#define BACK -1

int main(int argc, char const *argv[])
{
	int a, i, h = 0, d = 0, s = 1;
	scanf("%d", &a);
	char b;

	for (i = 0; i < a; ++i)
	{
		scanf(" %c", &b);

		if (b == 'S' && h < 200)
		{
			h += 10;
		}

		if (h != 0)
		{
			if (b == 'F' && d > -2000 && d < 2000)
			{
				s == 1 ? (d += 10) : (d -= 10);	
			}
			
			else if (b == 'D')
			{
				h -= 10;
			}
			else if (b == 'V' && d > -2000 && d < 2000)
			{
				s == 1 ? (d += 10) : (d -= 10);
				s *= -1;	
			}
		}
	}

	printf("%d %d", h, abs(d));
	return 0;
}