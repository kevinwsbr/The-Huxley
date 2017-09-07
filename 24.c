#include <stdio.h>

int fat(int n)
{
    int fat;
    if (n <= 1)
       return 1;
    else
    {
       return n*fat(n-1);
    }
}

int main(int argc, char const *argv[])
{
	int a = 0;
	do
	{
		scanf("%d", &a);
		if (a != -1)
		{
			printf("%d\n", fat(a));
		}
	} while (a != -1);
	return 0;
}