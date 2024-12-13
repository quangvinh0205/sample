#include <stdio.h>
#include <string.h>
#include <math.h>

int check(int a)
{
	long long f[100];
	int max=f[0];
	for(int i=0;i<=a;i++)
	{
			int max;
			if(f[i]<f[i+1])
			{
				max=f[i+1];
			}
			else if(f[i-1]>f[i])
			{
			max=f[i-1];
			}
	}
	return max;
}

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a;
		scanf("%d",&a);
		printf("%c",check(a));
	}
}
