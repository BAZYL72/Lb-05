#include <stdio.h>
int main() {
    int age;
    char citizenship;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen (Y/N)? ");
    scanf("%c", &citizenship);  
    if (age >= 18) {
        if (citizenship == 'Y' || citizenship == 'y') {
            printf("You are eligible to vote.");
        } 
        else {
            printf("You are not eligible to vote due to citizenship status.");
        }
    }
     else {
        printf("You are not eligible to vote due to age.");
    }

    return 0;
}
