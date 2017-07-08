#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	a > b ? printf("%d %d", b, a): printf("%d %d", a, b);
	return 0;
}