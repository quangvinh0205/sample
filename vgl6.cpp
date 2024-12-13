#include <stdio.h>
#include <math.h>

int main(){
	float tc,b,sum=0;
	scanf("%f",&tc);
	for(int i=1;i<=tc;i++){
		b=(float)(pow(-1,i))*i;
		sum+=b;
	}
	printf("%.2f",sum);
	return 0;
}