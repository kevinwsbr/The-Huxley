#include <stdio.h>
#define PI 3.14

int main(int argc, char const *argv[])
{
	char a = NULL;
	float b, c;
	scanf(" %c", &a);
	
	switch(a){
		case 'Q':
			scanf("%.2f", &b);
			printf("%.2f\n%.2f", b*b, b*4);
			break;
		case 'R':
			scanf("%.2f %.2f", &b, &c);
			printf("%1.2f\n%1.2f", b*c, (b*2)+(c*2));
			break;
		case 'C':
			scanf("%.2f", &b);
			printf("%1.2f\n%1.2f", PI*(b*b), 2*PI*b);
			break;
		default:
			printf("Nenhuma figura selecionada");
			break;
	}

	return 0;
}