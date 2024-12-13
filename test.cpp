//# include <stdio.h>
//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i=0; i<n ;i++){
//		scanf("%d", &a[i]);
//	}
//	// check
//	for(int i=0; i<n; i++){
//		if(a[i] <= 1) continue;
//		int check = 0;
//		for(int j=2; j*j<=a[i];j++){
//			if(a[i] % j == 0){
//				check = 1;
//				break;
//			}
//		}
//		if(check == 0) printf("%d ",a[i]);
//	}
//}



# include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n <= 0){
			printf("-1\n");
			continue;
		}
		else{
			long long sum = n + n;
			printf("%lld\n", sum);
		}
	}
}