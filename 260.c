#include <stdio.h>
#include <math.h>

int primo(long n){
	int flag = 1, i = 3;
	if ((n <= 1) || ((n != 2) && (n % 2) == 0))
	{
		flag = 0;
	}
	else
	{
		while(flag && (i <= sqrt(n))){
			if((n % i) == 0)
			{
				flag = 0;
			}
			i += 2;
		}	
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	long a = 0;
	do
	{
		scanf("%li", &a);
		if (a != -1)
		{
			printf("%d\n", primo(a));
		}
	} while (a != -1);
	return 0;
}