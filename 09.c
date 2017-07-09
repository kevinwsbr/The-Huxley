#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a, i;

	do{
		scanf("%d", &a);
		char *b = (char *) malloc(a*sizeof(char));
		fgets(b, sizeof(b), stdin);

		for (i = a; i >= 0; --i)
		{
			printf("%c", b[i]);
		}

		free(b);
		b = NULL;

	} while (a != 0);

	return 0;
}