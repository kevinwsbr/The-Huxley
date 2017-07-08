#include<stdio.h>

int validate(float pH){
	if ((pH<1)||(pH>14))
	{
		return 0;
	}
	return 1;
}

void check(float pH){
	if (pH>7){
			printf("Basica");
		}else if(pH<7){
			printf("Acida");
		}else{
			printf("Neutra");
		}
}

int main(int argc, char const *argv[])
{
	float a;
	scanf("%f", &a);
	validate(a) ? check(a) : printf("SEM RESPOSTA");
	return 0;
}