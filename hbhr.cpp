#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,sh,sc;
	scanf("%d%d",&sh,&sc);
	for(i=1;i<=sh;i++)
	{
		for(j=2;j<=i;j++)
		{
			printf("~");
		}
		for(int k=1;k<=sc;k++)
		{
			if(i==1||i==sh||k==1||k==sc) printf("*");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}