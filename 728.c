#include <stdio.h>

int main(int argc, char const *argv[])
{
	double v[10], s[3];
	int i, j = 0;
	for (i = 1; i < 10; ++i)
	{
		scanf("%lf", &v[i]);
		if ((i % 3) == 0)
		{
			s[j] = 3.6*(v[i-2] + (v[i-1]*v[i]));
			j++;
		}
	}
	s[0] < s[1] && s[0] < s[2] ? printf("%.1lf", s[0]) : s[1] < s[0] && s[1] < s[2] ? printf("%.1lf", s[1]) : printf("%.1lf", s[2]);
	return 0;
}