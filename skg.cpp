#include <stdio.h>
#include <string.h>

int main()
{
	int test;
	scanf ("%d", &test);
	while (test--)
	{
		char a[20];
		scanf ("%s", &a);
		int n=strlen(a), check=0; //gan gia tri do dai chuoi a cho n
		for (int i=1; i<n; i++) //i chay tu 1 den (gia tri so chu so cua chuoi a) - 1. Vi chuoi chay tu 0
		{
			if (a[i] < a[i-1])
			{
				check=1;
				break;
			}
		}
		if (check==0) printf ("YES\n");
		else printf ("NO\n");
	}
}