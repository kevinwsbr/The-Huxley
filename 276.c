#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned long long int a, b;
	scanf("%llu %llu", &a, &b);
	printf("%llu", (a+b)*(b/2));
	return 0;
}