#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	while(n<=m){
		(n % 2)==0 ? : printf("%d\n", n);
		++n;
	}
	return 0;
}