#include <stdio.h>
#include <math.h>

int main()
{
	int n,dem=0;
	scanf("%d",&n);
	int d=n;
	int sum = 0;
	while(d!=0)
	{
		int b = d%10;
		int c=1;
		for(int i=1;i<=b;i++)	c*=i;
		sum+=c;
		if(sum>n) break;
		d/=10;
	}
	if(sum==n)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}