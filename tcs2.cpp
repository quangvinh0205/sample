#include <stdio.h>
#include <math.h>

int main(){
	int tc;
	scanf("%d",tc);
	while(--tc){
	long long a,sum=0;
	scanf("%lld",&a);
	while(a){
		int b=a%10;
		sum+=b;
		a/=10;
	}
	printf("%d",sum);
	return 0;
}
return 0;
}
 