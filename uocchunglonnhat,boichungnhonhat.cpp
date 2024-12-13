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

long long bcnn(long long a, long long b)
{
	return a*b/ucln(a,b);
}

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(a>b)
	{
		printf("%lld %lld\n",bcnn(a,b),ucln(a,b));
	}
	else
	{
		printf("%lld %lld\n",bcnn(b,a),ucln(b,a));
	}
	}
}