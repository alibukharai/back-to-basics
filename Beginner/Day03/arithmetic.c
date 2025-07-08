#include<stdio.h>
int main(){
    int number1, number2, add, sub, mul, div;
    printf("Enter First number:");
    scanf("%d", &number1);
    printf("Enter Second number:");
    scanf("%d", &number2);
    add = number1 + number2;
    sub = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;
    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %d\n", div);
    return 0;
}