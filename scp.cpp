#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d",&a);
	while (a--){
		long long b;
		scanf("%d",&b);
		if(sqrt(b)==b){
			printf("NO");
		}
		else{
			printf("YES");
		} 
	}	
	return 0;
}
