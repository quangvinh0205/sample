#include <stdio.h>
#include <math.h>

int main (){
	int a,b;
	long long sum=0;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		for(int i=b;i<=a;i++){
			sum+=i;
		}
		printf("%lld",sum);
	}
	else if(a<b)
	{
		for(int i=a;i<=b;i++){
			sum+=i;
		}
		printf("%lld",sum);
	}
}