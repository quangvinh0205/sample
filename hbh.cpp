#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,kt;
	scanf("%d",&kt);
	for(i=1;i<=kt;i++)
	{
		for(j=1;j<=kt-i;j++)
		{
			printf("~");
		}
		for(j=1;j<=kt;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}