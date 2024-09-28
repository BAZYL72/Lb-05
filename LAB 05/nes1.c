#include <stdio.h>

int main() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0) {
        if (age <= 12) {
            printf("Child");
        }
         else if (age <= 19) {
            printf("Teenager");
        } 
        else if (age <= 59) {
            printf("Adult");
        } 
        else {
            printf("Senior\n");
        }
    } 
    else {
        printf("Invalid age");
    }

    return 0;
}
