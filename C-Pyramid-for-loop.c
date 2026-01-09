<<<<<<< HEAD
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
=======
#include<stdio.h>
int main(){
  int i, j;

  for(i=1; i<=10; i++){
    for(j=1; j<=i; j++){
    printf("*");
  }
  printf("\n");
}
  return 0;
>>>>>>> 958ac9f03c5eab491a3902f3fb34396331a19848
}