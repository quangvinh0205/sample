#include <stdio.h>

int snt(int a){
	if(a<2)
		return 0;
	for(int n=2;n<a;++n){
		if(a%n==0)
			return 0;
	}
	return 1;
}

int ktso(int a){
	int so=0;
	while(a){
		int x=a%10;
		so+=x;
		if(x!=2&&x!=3&&x!=5&&x!=7)
			return 0;
		a/=10;
	}
	if(snt(so))
		return 1;
	
}

int main(){
	int a,b,d=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;++i){
		if(snt(i)&&ktso(i)) ++d;
	}
	printf("%d",d);
}
