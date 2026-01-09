#include<stdio.h>
int main(){
  int i, j, height;

  printf("Enter height of pyramid:");
  scanf("%d", &height);
  for(i=1; i<=height; i++){
    for(j=1; j<=i; j++){
    printf("*");
  }
  printf("\n");
}
  return 0;
}