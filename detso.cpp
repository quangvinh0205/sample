#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,tich=1;
	int a[101];
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=n;i++)
	{
		if(a[i]%2==0)
		{
			tich*=a[i];
		}
	}
	cout<<tich;
	return 0;
}