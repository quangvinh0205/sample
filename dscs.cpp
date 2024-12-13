#include <stdio.h>
#include <math.h>

int main()
{
	long a,b,sum=0;
	scanf("%ld",&a);
	while(a!=0)
	{
		b=a%10;
		sum++;
		a/=10;
	}
	printf("%ld",sum);
}