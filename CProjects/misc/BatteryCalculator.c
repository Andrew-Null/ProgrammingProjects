#include <stdio.h>

void main()
{
	float max, percent, current;
	scanf("%f", &max);
	current = max;

	while (current > 0)
	{
		printf("%f/%f : %f\n",current, max, (current/max)*100);
		current -= .1;
	}
}
