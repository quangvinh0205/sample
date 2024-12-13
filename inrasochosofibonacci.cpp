#include <stdio.h>
#include <math.h>

void fibonacci(int n)
{
	long long F[100];
	F[0]=0; F[1]=1;
	for(int i=2;i<n;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
	// vong lap de kiem tra
	for(int i=0;i<n;i++)
	{
		printf("%lld ",F[i]);
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	fibonacci(a);
}
