#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long long n;
		scanf("%d",&n);
		int sqr=sqrt(n);
		if(sqr*sqr==n){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
