#include<stdio.h>
int main(){
    float cel;
    float farh;

    printf("Enter temp in celsius:\n");
    scanf("%f", &cel);

    farh = (cel * 1.8) + 32;

    printf("Temp in fahrenheit is %.2f", farh);
return 0;
}
