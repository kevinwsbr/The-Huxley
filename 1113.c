#include <stdio.h>

#define V_30 if ((1<=a)&&(a<=30)){printf("valida");}else{printf("invalida");}break;
#define V_31 if ((1<=a)&&(a<=31)){printf("valida");}else{printf("invalida");}break;

int bissexto(int a)
{
	if (((a%4)==0)&&(((a%100)!=0)||((a%400) == 0)))
	{
		return 1;
	}else
	{
		return 0;
	}		
}

int main(int argc, char const *argv[])
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if ((1900<=c)&&(c<=2100))
	{
		switch(b)
		{
			case 1:
				V_31
			case 2:
				if (bissexto(c))
				{
					if ((1<=a)&&(a<=29)){printf("valida");}else{printf("invalida");}break;
				}
				else
				{
					if ((1<=a)&&(a<=28)){printf("valida");}else{printf("invalida");}break;
				}
			case 3:
				V_31
			case 4:
				V_30
			case 5:
				V_31
			case 6:
				V_30
			case 7:
				V_31
			case 8:
				V_31
			case 9:
				V_30
			case 10:
				V_31
			case 11:
				V_30
			case 12:
				V_31
			default:
				printf("invalida");
				break;
		}
	}else
	{
		printf("invalida");
	}

	return 0;
}