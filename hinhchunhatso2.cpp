#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++)
	{
		int init = i; // tao bien init = chi so dong
		for(int j=1;j<=b;j++)
		{
			if(j<=b-i) printf("%d",init++); //neu chi so cot nho hon chi so cua b - i thi tang no len
			else printf("%d",init--); //neu chi so cot nho hon chi so cua b - i thi giam no xuong
		}
		printf("\n");
	}
}