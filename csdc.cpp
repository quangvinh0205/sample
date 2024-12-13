#include <stdio.h>
#include <string.h>

int main()
{
	char a[10];
	scanf("%s",&a);
	int n=strlen(a);
	printf("%c ",a[0]);
	printf("%c",a[n-1]);
}	