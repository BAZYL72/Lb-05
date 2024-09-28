#include <stdio.h>

int main() {
    int num1, num2, max;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    max = (num1 > num2) ? num1 : num2;
    printf("The maximum of the two numbers is: %d\n", max);
    return 0;
}
