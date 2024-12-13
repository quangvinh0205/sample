#include <stdio.h>
#include <math.h>

long long fibo(long long a)
{
	if(a==0||a==1) return 1;
	long long fn1=1,fn2=0,fn;
	for(int i=2;i<=10000000;i++)
	{
		fn=fn1+fn2;
		if(fn==a) return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}

int main()
{
	long long a;
	scanf("%lld",&a);
	if(fibo(a))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}