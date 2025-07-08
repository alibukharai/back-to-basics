#include <stdio.h>
int main(){
    char name[5];
    int age;
    printf("Enter the name:");
    scanf("%s", name);
    printf("Enter the age:");
    scanf("%d", &age);
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    return 0;
}
