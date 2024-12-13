#include <stdio.h>
#include <math.h>

int main()
{
	int cc;
	scanf("%d",&cc);
	for(int i=1;i<=cc;i++)
	{
		for(int j=1;j<=cc-i;j++)
		{
			printf("~");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");
		}
	printf("\n");
	}
}