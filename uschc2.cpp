#include <stdio.h>
#include <math.h>

int main ()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,dem=0;
		scanf("%d",&a);
		for(int i=1;i*i<=a;i++)
		{
			if(a%i==0)
			{
			if(i%2==0)
			{
				dem++;
			}
			if((a/i)%2==0)
			{
				dem++;
			}
			if(i*i==a&&i%2==0)
			{
				dem--;
			}
			}
		}
		printf("%d\n",dem);
	}
}