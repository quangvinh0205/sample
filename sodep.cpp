#include <stdio.h>
#include <math.h>

int fibonacci(int a,int b)
{
	long long fn1=1,fn2=0,fn;
	for(int i=a;i<=b;i++)
	{
		fn=fn1+fn2;
		if(fn==b)
		{
			return 1;
		}
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{
			if(fibonacci(a,b))
			{
				printf("%d",i);
			}
		}
	}
	else
	{
		for(int i=b;i<=a;i++)
		{
			if(fibonacci(b,a))
			{
			printf("%d",i);
			}
		}
	}
}