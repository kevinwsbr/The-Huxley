#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n[3], i, j, aux;
	scanf("%d %d %d", &n[0], &n[1], &n[2]);

	while(i<=2)
	{
		
	}

	while(n[j+1]!=NULL){
		if (n[j]>n[j+1])
		{
			aux = n[j+1];
			n[j+1] = n[j];
			n[j] = aux;
		}
	}

	return 0;
}