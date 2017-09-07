#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	switch(b)
	{
		case 1:
			printf("VERAO");
		break;
		case 2:
			printf("VERAO");
		break;
		case 3:
			a <= 20 ? printf("VERAO") : printf("OUTONO");
		break;
		case 4:
			printf("OUTONO");
		break;
		case 5:
			printf("OUTONO");
		break;
		case 6:
			a <= 20 ? printf("OUTONO") : printf("INVERNO");
		break;
		case 7:
			printf("INVERNO");
		break;
		case 8:
			printf("INVERNO");
		break;
		case 9:
			a <= 20 ? printf("INVERNO") : printf("PRIMAVERA");
		break;
		case 10:
			printf("PRIMAVERA");
		break;
		case 11:
			printf("PRIMAVERA");
		break;
		case 12:
			a <= 20 ? printf("PRIMAVERA") : printf("VERAO");
		break;
		default:
			printf("SEM RESPOSTA");
		break;
	}
	return 0;
}