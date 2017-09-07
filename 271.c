#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
	double r;
	scanf("%lf", &r);
	printf("Area = %.4lf\n", (PI*r/100*r/100));
	return 0;
}