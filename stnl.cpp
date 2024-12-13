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
		int n=strlen(a),dem=0,tong=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=n-1;j>=0;j--)
			{
				if(a[i]==a[j]&&a[i-1]<a[i]&&a[i]<a[i+1]&&a[j-1]<a[j]&&a[j]<a[j+1])
				{
					if(a[i]%2!=0&&a[j]%2!=0)
					{
						dem++;
					}
				}
			}
		tong+=a[i];
		}
		if(tong%2==0)
		{
			printf("NO");
		}
		else if(tong%2!=0)
		{
			printf("YES");
		}
	}
}