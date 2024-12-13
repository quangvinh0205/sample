#include <stdio.h>
#include <math.h>

int main (){
	int dem,a=0,sum=0;	
	scanf("%d",&dem);
	while(a<=dem){
		sum+=a;
		++a;
	}
	printf("%d",sum);
	return 0;
}