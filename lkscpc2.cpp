#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a=ceil(sqrt(m));    //ceil la lam tron thanh so nguyen gan nhat 
	int b=floor(sqrt(n));	//floor la lam tron xuong so nguyen gan nhat
	printf("%d\n",b-a+1);	// dem so chinh phuong
	for(int i=a;i<=b;i++)
	{
		printf("%d\n",i*i);
	}
	return 0;
}