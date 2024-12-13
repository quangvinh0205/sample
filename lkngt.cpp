#include <stdio.h>
#include <math.h>
//viet ham thi neu ket qua sai thi "return 0", neu ket qua dung thi "return 1"

int kiemtra(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int n,i=1,dem=0;
	scanf("%d",&n);
	while(i++)
	{
		if(kiemtra(i)) 
		{
		printf("%d\n",i);
		dem++;
		if(dem>=n) break;
		}
	}
}