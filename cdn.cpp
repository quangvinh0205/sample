#include <stdio.h>
#include <math.h>

int main(){
	int ngaynhap,nam,tuan, ngaydu;
	scanf("%d",&ngaynhap);
	nam=ngaynhap/365;
	ngaydu = ngaynhap%365;
	tuan=ngaynhap/7;
	ngaydu=ngaynhap%7;
	printf("%d %d %d",nam,tuan,ngaydu);
}