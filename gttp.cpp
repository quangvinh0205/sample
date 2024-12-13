#include <stdio.h>

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		long long a;
		scanf("%lld",&a);
		double b=(double)1/a;
		printf("%.15f\n",b);
	}
	return 0;
}
