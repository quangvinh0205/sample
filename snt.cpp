#include <stdio.h>
#include <math.h>

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int dem=0;
		long a;
		scanf("%ld",&a);
		for(int i=2;i<=sqrt(a);i++)
		{
		if(a%i==0)
		{
			dem++;
		}
		}
		if(dem==0)
		{
			printf("YES");
		}
		else if(dem>0){
			printf("NO");
		}
		else
		{
			printf("YES");
		}
		printf("\n");
	}
}