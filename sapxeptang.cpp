#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	int a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			int temp = a[i];
			a[i]=a[j];
			a[j]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}