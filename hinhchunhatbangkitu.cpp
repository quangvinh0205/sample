#include <stdio.h>
#include <math.h>

int min(int a,int b)
{
	return a<b ? a:b;
}

int main()
{
	int cot,hang;
	scanf("%d%d",&cot,&hang);
	for(int i=1;i<=cot;i++)
	{
		int init = min(i,hang);
		for(int j=cot;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}