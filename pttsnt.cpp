#include <stdio.h>
#include <math.h>

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,b,dem;
		scanf("%d",&a);
		for(int i=2;i<sqrt(a);i++)
		{
			while(a%i==0)
			{
				printf("%d ",i);
				a/=i;
			}
		}
		if(a>1)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
}



