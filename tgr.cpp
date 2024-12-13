#include <stdio.h>
#include <math.h>

int main()
{
	int a,cc;
	scanf("%d",&cc);
	for(int i=1;i<=cc;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i==1||i==cc||j==1||j==i)
			{
				printf("*");
			}
			else
			{
				printf(".");
			}
		}
	printf("\n");
	}
}