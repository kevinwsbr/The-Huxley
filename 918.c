#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	scanf("%d", &a);

	printf("Digite um numero de um canal de tv:\n");
	switch(a)
	{
		case 2:
			printf("SBT");
			break;
		case 4:
			printf("BAND");
			break;
		case 6:
			printf("REDETV!");
			break;
		case 9:
			printf("RECORD");
			break;
		case 13:
			printf("GLOBO");
			break;
		default:
			printf("Canal Invalido");
			break;
	}

	return 0;
}