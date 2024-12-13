#include <stdio.h>
#include <math.h>

int tongcs(int a)
{
	int tong = 0, b;
	while(a!=0)
	{
		b = a%10;
		tong+=b;
		a/=10;
	}
	return tong;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(tongcs(a)>tongcs(b))
	{
		printf("%d %d", b,a);
	}
	else
	{
		printf("%d %d", a,b);
	}
}