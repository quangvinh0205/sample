#include <stdio.h>
 
int main(){
  int a,b;
  double nghiem;
  scanf("%d%d", &a,&b);
  if(a == 0) {
    if(b == 0) {
      printf("Vo so nghiem");
    } else {
      printf("Vo nghiem");
    }
  } 
  else {
      nghiem = (double)-b/a;
      printf("%0.2f",nghiem);
  }
  return 0;
}
