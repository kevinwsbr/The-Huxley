#include <stdio.h>

int main(int argc, char const *argv[])
{
	float a, b;

	scanf("%f %f", &a, &b);

	printf("%.2f", ((30*a)+(b*0.01))-(((30*a)+(b*0.01))*10)/100);

	return 0;
}