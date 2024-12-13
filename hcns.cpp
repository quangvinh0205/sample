#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++)
	{
		printf("%d",i);
		for(int j= i+1;j<=b;j++)
		{
			printf("%d%d",j);			
		}
		printf("\n");
	}
}