// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=5){
//         printf("This is while loop value of i:%d !\n", i);
//         i++;
//     }
//     return 0;
// }

//multiplication using while loop

#include<stdio.h>
int main(){
    int i=1;
    int n;

    printf("Enter any number for multiplication:");
    scanf("%d", &n);

    while(i<=10){
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}