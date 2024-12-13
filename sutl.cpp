#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		char a[19];
		int demc=0, deml=0;
		scanf("%s",&a);
		int n=strlen(a);
		for(int i=0;i<=n-1;i++)
		{
			if(a[i]%2==0)
			{
				demc++;
			}
			else if(a[i]%2!=0)
			{
				deml++;
			}
		}
		if(demc<deml)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}