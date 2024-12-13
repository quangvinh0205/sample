#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	long long tich = (long long)a*b;
	float x=(float)a/b;
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%lld\n",tich);
	printf("%d\n",a/b);
	printf("%d\n",a%b);
	printf("%.2f\n",x);
	return 0;
}
