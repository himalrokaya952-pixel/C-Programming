// #include<stdio.h>
// int main(){
//     int i=1;

//     do{
//         printf("We are using do while loop");
//         i++;
//     }while(i<=5);

//     return 0;
// }

#include<stdio.h>
int main(){
     int i=1, n;

     printf("Enter your choice:");
     scanf("%d", &n);

     do{
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
     }while(i<=10);

     return 0;
}