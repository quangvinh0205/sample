#include <stdio.h>
#include <math.h>

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,sum=0;
		scanf("%d",&a);
		while(a!=0)
		{
			int b=a%10;
			sum+=b;
			a/=10;
		}
		if(sum%10==0)
		{
			printf("YES");
		}
		if(sum%10!=0)
		{
			printf("NO");
		}
		printf("\n");
	}
}