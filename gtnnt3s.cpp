#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int snn = a;
	if(snn>b){
		snn=b;
	}
	if(snn>c){
		snn=c;
	}
		printf("%d",snn);
		return 0;
}
