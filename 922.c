#include <stdio.h>

int main(int argc, char const *argv[])
{
	float a;
	scanf("%f", &a);
	printf("Informe o salario do colaborador:\n");
	if (a<=280)
	{
		printf("Salario antes do reajuste: %.1f\nPercentual de aumento aplicado: 20%%\nValor do aumento: %f\nSalario com reajuste: %.2f", a, (a*20)/100, a + (float)((a*20)/100));
	}
	else if ((a > 280) && (a < 700))
	{
		printf("Salario antes do reajuste: %.1f\nPercentual de aumento aplicado: 15%%\nValor do aumento: %f\nSalario com reajuste: %.2f", a, (a*15)/100, a + (float)((a*15)/100));
	}
	else if ((a >= 700) && (a < 1500))
	{
		printf("Salario antes do reajuste: %.1f\nPercentual de aumento aplicado: 10%%\nValor do aumento: %f\nSalario com reajuste: %.2f", a, (a*10)/100, a + (float)((a*10)/100));
	}
	else if (a >= 1500)
	{
		printf("Salario antes do reajuste: %.1f\nPercentual de aumento aplicado: 5%%\nValor do aumento: %f\nSalario com reajuste: %.2f", a, (a*5)/100, a + (float)((a*5)/100));
	}

	return 0;
}