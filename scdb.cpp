#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		char a[19];
		scanf("%s",&a);
		int n=strlen(a),dem=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]%2!=0)
			{
				dem++;
			}
		}
		if(dem!=0)
		{
			printf("NO\n");
		}
		else if(dem==0)
		{
			printf("YES\n");
		}
	}
}