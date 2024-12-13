#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d",&a);
	for(int i=0;i<10;i++){
		a*=i;
		++i;
	}
	printf("%d",a);
	return 0;
}