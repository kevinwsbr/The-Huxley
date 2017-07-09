#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c=0;

	scanf("%d %d", &a, &b);
	while(a<=b)
	{
		if (((a%4)==0)&&(((a%100)!=0)||((a%400) == 0)))
		{
			printf("%d\n", a);
			c++;
		}
		a++;
	}

	if (c==0)
	{
		printf("-1");
	}

	return 0;
}