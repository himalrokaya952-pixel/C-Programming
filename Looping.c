// #include<stdio.h>
// int main(){
//     //for loop
//     int i;
//     for(i=1; i<=10; i++);
//         printf("Hello World\n %d\n", i);
//         return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter any number for multiplication:");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}