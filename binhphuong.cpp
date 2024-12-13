#include <stdio.h>

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		long long a,b;
		scanf("%lld",&a);
		b=a*a;
		printf("%lld\n",b);
	}
	return 0;
}
