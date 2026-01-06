#include<stdio.h>
int main(){
    int a = 25;
    int b = 20;
//Arithmetic operators
    printf("Addition: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Division: %d\n", a/b);
    printf("Multiplication: %d\n", a*b);
    printf("Modulu: %d\n", a%b);

//Relational Operators
//Used to compare two values. Result is true(1) or false(0)

printf("Greater %d\n",a>b);
printf("Less than %d\n",a<b);
printf("Equal to %d\n",a==b);
printf("Not Equal to %d\n",a!=b);
printf("Greater than or equal to %d\n",a>=b);
printf("Less than or equal to %d\n",a<=b);

// 3. Logical and Boolean Operators
// Used to combine multiple conditions
//Operator Meaning
//&& logical AND
//! logical NOT
//|| logical OR

printf("Logical AND %d\n", (a>b)&&(a<b));
printf("Logical OR %d\n", (a>b)||(a<b));

//AND logic
printf("Logical AND %d\n", 1&&0);
printf("Logical AND %d\n", 0&&0);
printf("Logical AND %d\n", 1&&1);

//Or logic
printf("Logical OR %d\n", 1||0);
printf("Logical OR %d\n", 1||1);
printf("Logical OR %d\n", 0||0);

//Assignment Operator
//Used to assign values to variables.
//Operator Example Meaning
// =   a = 5    Assign
// +=  a += 3   a = a + 3
// -=  a -= 2   a = a - 2
// *=  a *= 4   a = a * 4
// /=  a /= 2   a = a / 2
int z = 1;
z += 3;
printf("Assigning addition %d\n", z);
z = z + 3;

printf("Assigning addition2 %d\n", z);

z *= 3;
printf("Multiplication %d\n", z);
z= z*4;

printf("Multiplication2 %d\n", z);


//ternary Operator short form of if-else
// condition ? expression1 : expression2;

int age=20;
(age>=18) ? printf("Eligible\n"): printf("Not Eligible\n");

int input;
scanf("%d", &input);
(input%2==0)? printf("Even\n"): printf("Odd\n");


//increment and decrement operators
//Used to increase or decrease the value of a variable by 1.
//Operator Meaning
// ++ Increment
// -- Decrement

//Write a program to demonstrate increment and decrement operators

int count = 5;
printf("Initial count: %d\n", count);
count++;
printf("After increment: %d\n", count);
count--;
printf("After decrement: %d\n", count);
printf("Final count: %d\n", count);

return 0;
}