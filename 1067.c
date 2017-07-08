#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	char a[16];

	scanf(" %s", &a);

	if (strlen(a) != 1)
	{
		printf("1 caractere, por favor!");
	}
	else
	{
		if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u' || a[0] == 'A' || a[0] == 'E' || a[0] == 'I' || a[0] == 'O' || a[0] == 'U')
		{
			printf("Eh vogal");
		}
		else
		{
			printf("Nao eh vogal");
		}
	}

	return 0;
}