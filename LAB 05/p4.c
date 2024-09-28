#include <stdio.h>

int main() {
    int age;
    float income;
    int creditScore;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    printf("Enter your credit score: ");
    scanf("%d", &creditScore);

    if (age >= 18 && income >= 30000 && creditScore >= 650) {
        printf("You are eligible for the loan.");
    } 
    else {
        printf("You are not eligible for the loan.");
    }
    return 0;
}
