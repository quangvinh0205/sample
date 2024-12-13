#include <stdio.h>
#include <math.h>

long long ucln(long long a, long long b)
{
	if(a==0||b==0)
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(ucln(a,b)==ucln(c,d))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}