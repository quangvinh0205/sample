#include <stdio.h>
#include <math.h>

int main(){
	int a,b,sum=1;
	scanf("%d",&a);
	while(a){
		b=a%10;
		sum*=b;
		a/=10;
	}
	printf("%d",sum);
	return 0;
}