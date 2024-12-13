#include <stdio.h>
#include <math.h>

int main(){
	int a,b,sum=0,dem=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			sum+=i;
			if(sum==a)
			{
				dem++;
			}
		}
	}
	if(dem==0)
	{
		printf("0");
	}
	else if(dem!=0)
	{
		printf("1");
	}
}

