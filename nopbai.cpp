#include<stdio.h>
#include<math.h>

int main()
{
	float n;
	long x,y,z;
	scanf("%f",&n);
	x=ceil(n);
	y=floor(n);
	z=round(n);
	printf("%ld\n",y);
	printf("%ld\n",x);
	printf("%ld",z);
}