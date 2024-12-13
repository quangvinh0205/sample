#include <stdio.h>
#include <math.h>

int main(){
	int tc,sum=0;
	scanf("%d",&tc);
	for(int i=0;i<=tc;i++){
		sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}