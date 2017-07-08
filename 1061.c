#include<stdio.h>
#define PI 3.14

float area(float radius){
	return PI*(radius*radius);
}

int main(int argc, char const *argv[])
{
	float a, b;
	scanf("%f %f", &a, &b);
	if(area(a)>area(b)){
		printf("Primeiro circulo");
	}else if(area(a)<area(b)){
		printf("Segundo circulo");	
	}else{
		printf("Iguais");
	}
	return 0;
}