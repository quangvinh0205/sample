#include<stdio.h>
#include<math.h>

int main()
{
	int i,r,c;
	scanf("%d%d",&r,&c);
	int m=0;
	for(i=0;i<r;i++)
	{
		int nga=0;
		while(nga<m)
		{
			printf("~");
			nga++;
		}
		while(nga<m+c)
		{
			if(i==0||i==r-1||nga==m||nga==c+m-1)
			{
				printf("*");
			}
			else
			{
				printf(".");
			}
			m++;
		}
		m++;
		printf("\n");
	}
}