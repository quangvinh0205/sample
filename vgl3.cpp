#include <stdio.h>
#include <math.h>

int main (){
	int tc,sum=0;
	scanf("%d",&tc);
	for(int a=0;a<=tc;++a){
		if(a%3==0){
			sum+=a; // Vong lap chay thoa man dieu kien s? 
		}
	}
	printf("%d",sum);
	return 0;
}