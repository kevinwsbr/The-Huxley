#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char a[51], b[51];
	scanf(" %s %s", &a, &b);
	if (!strcmp(a, b))
	{
		printf("IGUAIS");
	}
	else
	{
		printf("DIFERENTES");
	}
	return 0;
}