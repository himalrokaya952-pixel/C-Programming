#include<stdio.h>
int main(){
    float unit;
    int cost = 5;
    float elec_bill;

    printf("Enter units consumed:\n");
    scanf("%f", &unit);

    elec_bill = unit * cost;
    printf("Total bill amount is %.2f", elec_bill);
    return 0;
}