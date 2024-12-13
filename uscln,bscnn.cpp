#include <stdio.h>
#include <math.h>

int uscln(int m,int n)
{
	while(n!=0)
	{
		int x= m%n;
		m = n;
		n = x;
	}
	return m;
}

long long bscnn(int m,int n)
{
	 return (long long) m*n/uscln(m,n);
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",uscln(m,n));
	printf("%lld",bscnn(m,n));
}

