#include<stdio.h>
int main(){
    float l, b;
    float area, perimeter;

    printf("Enter length and breadth:\n");
    scanf("%f%f", &l, &b);

    area = l * b;
    perimeter = 2*(l+b);

    printf("Area of rectangle is %.2f", area);
    printf("Perimeter of a rectangle is %.2f", perimeter);
    return 0;

}