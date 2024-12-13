#include <stdio.h>
#include <string.h>

int main ()
{
	char a[10];
	scanf("%s",&a);
	int n=strlen(a); //do dai cua string
	
	if(a[n-1]!='0') 
	printf("%c",a[n-1]);
	
	for(int i=1;i<n-1;i++) //chay tu 1 ( chi so cua string ) den n-1
	{
		printf("%c",a[i]); //in ra cac so chay tu 1 ( chi so cua string ) den n-1
	}
	printf("%c",a[0]); // in ra chu so dau tien
}