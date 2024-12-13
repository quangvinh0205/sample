#include <stdio.h>
#include <math.h>

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a=1,b;
	if(1<=n&&k<=100)
	{
	for(int i=1;i<=n;i++)
	{
		a*=i;
	}
	b=pow(2,k);
	if(a%b==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	}
}