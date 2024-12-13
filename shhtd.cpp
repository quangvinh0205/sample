#include <stdio.h>
#include <math.h>

int nt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return n>1;
}

void init(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(nt(i))
		{
			int tmp=(int)pow(2,i)-1;
			if(nt(tmp))
			{
				printf("%d ",i);
			}
		}
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b>a)
	{
		init(a,b);
	}
	else
	{
		init(b,a);
	}
}