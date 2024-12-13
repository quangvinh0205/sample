#include <stdio.h>
#include <math.h>

int main(){
	float tc,b,sum=0;
	scanf("%f",&tc);
	for (int a=1;a<=tc;a++){ //neu thuc hien phep chia thi phai bat dau tu 1. 
		b=(float)1/a; //co the su dung kieu du lieu double hoac float.
		sum+=b;
		a++;
	}
	printf("%.3f",sum);
	return 0;
}