#include <stdio.h>
#include <math.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<n){
		int bd=sqrt(m),kt=sqrt(n),i,dem;
		dem=kt-bd+1;
		printf("%d\n",dem);
///		bd=(bd*bd==m)?bd:bd+1;	||	kiem tra neu start = m, neu dung thi bat dau tu start, neu sai thi bat dau tu start +1.
		if(bd*bd==m){
			for(i=bd;i<=kt;i++){
				printf("%d\n",i*i);
			}
		}
		else if(bd*bd!=m){
			for(i=bd+1;i<kt;i++){
				printf("%d\n",i*i);
			}
		}
		}
	}