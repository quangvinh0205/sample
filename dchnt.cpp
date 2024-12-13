#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char a[19];
	int dem=0;
	scanf("%s",&a);
	int n=strlen(a);
	for(int i=0;i<n-1;i++)
	{
		if(sqrt(a[i])==0)
		{
			printf("%c",a[i]);
		}
	}
}