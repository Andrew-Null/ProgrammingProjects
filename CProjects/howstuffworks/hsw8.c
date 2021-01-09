#include <stdio.h>

void main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("%d\n",a);
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d + %d + %d = %d\n", a, b, c, a+b+c);
}

