#include <stdio.h>
#include <string.h>

void MiInento()
{
	char str[100];
	scanf("%c",str);
	printf("%c",str);	
}

int main()
{
	char s[1000];
	int count=0;
	while (gets(s))
	{
		count += strlen(s);
		printf("%d\n", count);
	}
	printf("%d\n", count);
}
