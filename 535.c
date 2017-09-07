#include <stdio.h>

#define width ((size*2)+1)
#define height (size*2)

void draw(int size, int sand)
{
	char a[height][width], i, j;
	int flag = 0;

	for (i=0; i < height; i++){
		for (j=0; j < width; j++)
	  	{
			a[i][j] = ' ';
	 	}
	}

	for (i=0; i < height; i++){
		for (j=0; j < width; j++)
	  	{
			a[i][0] = '*';
			a[i][width-1] = '*';

			if ((i == 0) || (i == height-1))
			{
				if (((j % 2) == 0) && (j != width-1))
				{
					a[i][j] = ' ';
				}
				else
				{
					a[i][j] = '*';
				}
			}
			else
			{
				if (i < width/2)
				{
					a[i][i+1] = '*';
					a[i][(width-2)-i] = '*';
				}
				else
				{
					a[i][i] = '*';
					a[i][(width-2)-(i-1)] = '*';
				}
			}
	 	}
	}

	for (i=0; i < height; i++){
		flag = 0;
		for (j=0; j < width; j++)
	  	{
	  		if ((i != 0) && (i != (height-1)) && (i !=(height/2)) && (i != (height/2)-1))
	  		{
	  			if (((!(i <= sand)) && (i < height/2)) || (i >= (height-1)-sand))
	  			{
	  				if (a[i][j] == '*')
			  		{
			  			flag++;
			  		}

					if ((flag == 2) && (a[i][j] != '*') && (a[i][j] == ' '))
					{
						a[i][j] = '.';
					}
	  			}
	  		}
	 	}
	}

	for (i=0; i < height; i++){
		for (j=0; j < width; j++)
	  	{
			printf("%c", a[i][j]);
	 	}
	 	printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int a, b, c, i;
	scanf("%d", &a);
	for (i = 1; i <= a; ++i)
	{
		scanf("%d %d", &b, &c);
		printf("Caso %d:\n", i);
		draw(b, c);
	}
	return 0;
}

