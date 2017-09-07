#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, d;

	scanf("%d %d", &a, &b);
 	d = a;

	while(a > 0)
	{
		scanf("%d", &c);
		if (a == d)
		{
			d = c + b;
		}
		
		b += c;
		d > b ? (d = b) : (d = d);
		a--;
	}

	printf("%d", d);

	return 0;
}