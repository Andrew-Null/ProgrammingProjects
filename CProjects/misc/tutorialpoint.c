#include <stdio.h>
int main()
{
	int a, b, c, d, e[4];
	scanf("%d", &a);
	scanf("%d", &b);
	c = a*b;
	d = c;
	e[0] = a;
	e[1] = b;
	e[2] = c;
	e[3] = d;
	printf("the product is: %d \n", c);
	
	if (e[2]<0)
	{
		if (e[0]<0)
		{
			printf("%d is negative and %d is positive\n", e[0], e[1]);
		}
		
		if (e[1]<0)
		{
			printf("%d is negative and %d is positive\n", e[1], e[0]);
		}
		
		while (e[3] < 0)
		{
			e[3]++;
			printf("%d\n", e[3]);
			
		}
		
	}
	else
	{
		while (e[3] > 0)
		{
			e[3]--;
			printf("%d\n",e[3]);
		}
	}
	
	return 0;
}
