#include <stdio.h>
#define MEDIA ((a+b+c)/3)

int main(int argc, char const *argv[])
{
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	if ((3 <= MEDIA) && (MEDIA < 7))
	{
		printf("prova final");
	}
	else if (MEDIA < 3)
	{
		printf("reprovado");
	}
	else
	{
		printf("aprovado");
	}

	return 0;
}