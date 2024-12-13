#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int tc;
	scanf ("%d",&tc);
	while(tc--)
	{
		int a[101];
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==0)
			{
				printf("%d ",a[i]);	
			}
		}
		printf("\n");
	}
}