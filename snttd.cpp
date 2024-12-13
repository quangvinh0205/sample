#include <stdio.h>

int gth(int n)
{
	int i,gt=1;
	for(i=1;i<=n;i++)
	{
		gt*=i;
	}
	return gt;
}

int kq(int n)
{
	int x=n,dem=0;
	while(n>0)
	{
		dem+=gth(n%10);
		n/=10;
	}
	if(dem==x) return 1;
	return 0;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(int i=a;i<=b;i++)
	if(kq(i)) printf("%d ",i);
}