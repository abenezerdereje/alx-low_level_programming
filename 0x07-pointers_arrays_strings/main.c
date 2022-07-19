#include"main.h"
#include<stdio.h>
int main(void)
{
	char *s = "abc";
	char *f = "ba";

	unsigned int a = _strspn(s, f);
	printf("%d",a);

	return (0);
}
