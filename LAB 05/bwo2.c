#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num > 0) ? printf("The number is positive.") :
    (num < 0) ? printf("The number is negative") : 
                printf("The number is zero.");
    return 0;
}
