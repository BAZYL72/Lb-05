#include <stdio.h>

int main() {
    int attendance;
    float assignmentScore;
    float examScore;
    char finalGrade;

    printf("Enter attendance percentage (0-100): ");
    scanf("%d", &attendance);

    printf("Enter average assignment score (0-100): ");
    scanf("%f", &assignmentScore);

    printf("Enter exam score (0-100): ");
    scanf("%f", &examScore);

    if (attendance >= 75) {
        if (assignmentScore >= 50) {
            if (examScore >= 50) {
                finalGrade = 'A';
            } 
            else {
                finalGrade = 'B';
            }
        } 
        else {
            if (examScore >= 50) {
                finalGrade = 'C';
            } 
            else {
                finalGrade = 'D';
            }
        }
    } 
    else {
        finalGrade = 'F';
    }
    printf("The final grade is: %c", finalGrade);

    return 0;
}
