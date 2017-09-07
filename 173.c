#include <stdio.h>

int selection_sort(int num[], int tam) { 
  int i, j, min, aux, count = 0;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (num[i] != num[min]) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
       count++;
     }
  }
  return count;
}

int main(int argc, char const *argv[])
{
	int a, b, i, j, count = 0;
	scanf("%d %d", &a, &b);
	int c[a][b], d[a], e[b];

	for (i = 0; i < a; ++i)
	{
		for (j = 0; j < b; ++j)
		{
			scanf("%d", &c[i][j]);
			e[j] = c[j][0];
		}
		d[i] = c[i][0];
	}

	count += selection_sort(e, b) + selection_sort(d, a);
 
	printf("%d", count);

	return 0;
}