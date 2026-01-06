#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter any three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        printf("A is largest %d", a);
        if(b>c){
            printf("Second %d", b);
            printf("Smallest %d", c);
        }
        else{
            printf("Second %d", c);
            printf("Smallest %d", b);
        }
    }
    else if(b>a && b>c){
        printf("B is largest %d", b);
if(a>c){
    printf("Second %d", a);
    printf("Smallest %d", c);
}
else{
    printf("Second %d", c);
    printf("Smallest %d", a);
}
    }
    else{
        printf("C is Largest %d", c);
        if(a>b){
            printf("Second %d", a);
            printf("Smallest %d", b);
        }
        else{
            printf("Second %d", b);
            printf("Smallest %d", a);
        }
    }
return 0;
}