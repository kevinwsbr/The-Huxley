#include <stdio.h>

long fat(long n)
{
    if (n <= 1)
       return 1;
    else
    {
       return n*fat(n-1);
    }
}

int main(int argc, char const *argv[])
{
	long a[5], b = 0, i;
	scanf("%li %li %li %li %li", &a[0], &a[1], &a[2], &a[3], &a[4]);

	for (i = 0; i < 5; ++i)
	{
		if (a[i] % 3 == 0)
		{
			b += fat(a[i]);
		}
	}

	printf("%li", b);

	return 0;
}