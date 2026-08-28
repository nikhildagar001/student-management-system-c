#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s!\n", name);
    printf("Your age is %d.\n", age);

    return 0;
}