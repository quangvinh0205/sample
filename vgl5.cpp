#include <stdio.h>
#include <math.h>

int main (){
	float tc,b,sum=0;
	scanf("%f",&tc);
	for (int a=1;a<=tc;a++){
		b=(float)1/(2*a);
		sum+=b;
	}
	printf("%.2f",sum);
	return 0;
}