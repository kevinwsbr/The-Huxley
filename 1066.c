#include<stdio.h>

int main(int argc, char const *argv[])
{
	float a;
	char b;

	scanf("%f", &a);
	fflush(stdin);
	b = getc(stdin);

	if (a >= 37.0)
	{
		if (b == 'S')
		{
			printf("Exames Especiais");
		}else if (b == 'N')
		{
			printf("Exames Basicos");
		}else{
			printf("Erro");
		}
	}else
	{
		if (b == 'S')
		{
			printf("Exames Basicos");
		}else if (b == 'N')
		{
			printf("Liberado");
		}else{
			printf("Erro");
		}
	}

	return 0;
}