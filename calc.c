#include<stdio.h>
int main(){
    int num1, num2;
    char operator;
    int res;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Select an operator:");
    scanf(" %c", &operator);

    res = (operator == '+')?num1+num2:
    (operator == '-')? num1-num2:
    (operator == '*')? num1*num2:
    (operator == '/')? num1/num2:
    (operator == '%')? num1%num2:
    0;

    printf("Result is %d", res);
    return 0;
}