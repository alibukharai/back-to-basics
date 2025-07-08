#include<stdio.h>
int main(){
    int number1, number2, number3;
    float sum, Av;
    printf("Enter Number1:");
    scanf("%d", &number1);
    printf("Enter Number2:");
    scanf("%d", &number2);
    printf("Enter Number3:");
    scanf("%d", &number3);
    sum = number1 + number2 + number3;
    printf("Sum: %f\n", sum);
    printf("Average: %f\n", sum/3);
    return 0;
}