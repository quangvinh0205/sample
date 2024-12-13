#include <stdio.h>
#include <string.h>

int main()
{
	int a,c,b,demc=0,deml=0;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		if(b%2==0)
		{
			b+=demc;
			demc++;
		}
		else if(b%2!=0)
		{
			c+=deml;
			deml++;
		}
		a/=10;
	}
	printf("%d ",deml);
	printf("%d ",demc);
}